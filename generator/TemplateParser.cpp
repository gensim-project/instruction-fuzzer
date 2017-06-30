#include "TemplateParser.h"
#include "fuzzer-parser.h"
#include "fuzzer-syntax.tabs.h"
#include "fuzzer-syntax.l.h"

#include <fstream>
#include <sstream>

static std::string yyfilename;

bool TemplateParser::Parse(const char *filename) {
	//~ printf("Parsing %s\n", filename);
	FILE *f = fopen(filename, "r");
	yyscan_t scanner;
	
	yylex_init(&scanner);
	yyset_in(f, scanner);

	yyparse(scanner, this);

	yylex_destroy(scanner);

	return true;
}

TemplateCollection &TemplateParser::Get()
{
	return _templates;
}

const char *nodetypes[] = {
	
};

static const char *map_nodetype(astnode *doc) {
	return "";
}

static void print_nodetext(astnode *doc) {
	switch(doc->Type()) {
		case Node_U64:
			printf("%lu\n", doc->Integer());
			break;
		case Node_String:
			printf("%s\n", doc->String());
			break;
		default:
			printf("%u\n", doc->Type());
			break;
	}
}

static void print_node(int indent, astnode *doc) {
	for(int i = 0; i < indent; ++i) {
		printf("\t");
	}
	
	print_nodetext(doc);
	
	for(auto i : doc->Children()) {
		print_node(indent+1, i);
	}
}

void TemplateParser::ProcessDocument(astnode *doc) {
	//~ printf("\n\n");
	//~ print_node(0, doc);
	//~ printf("\n\n");
	
	VisitDocument(doc);
}

void TemplateParser::VisitDocument(astnode *doc) {
	for(auto i : doc->Children()) {
		switch(i->Type()) {
			case Node_Template:
				VisitTemplateStatement(i);
				break;
			case Node_Field:
				VisitFieldStatement(i);
				break;
			default:
				throw std::logic_error("Unknown type: " + std::to_string(i->Type()));
		}
	}
}

void TemplateParser::VisitTemplateStatement(astnode *doc) {
	Template t;
	
	for(auto i : doc->Children()) {
		switch(i->Type()) {
			case Node_TemplateChunkList:
				VisitTemplateChunkList(i, &t);
				break;
			default:
				throw std::logic_error("");
		}
	}
	
	_templates.push_back(t);
}

void TemplateParser::VisitTemplateChunkList(astnode *doc, Template *parent) {
	for(auto i : doc->Children()) {
		switch(i->Type()) {
			case Node_TemplateChunkText:
				VisitTemplateChunkText(i, parent);
				break;
			case Node_TemplateChunkExpr:
				VisitTemplateChunkExpression(i, parent);
				break;
			default:
				throw std::logic_error("");
		}
	}
}

void TemplateParser::VisitTemplateChunkText(astnode *doc, Template *parent) {
	parent->AddChunk(new StringTemplateChunk(doc->Children().at(0)->String()));
}

void TemplateParser::VisitTemplateChunkExpression(astnode *doc, Template *parent) {
	parent->AddChunk(VisitTemplateExpression(doc->Children().at(0), parent));
}

TemplateChunk *TemplateParser::VisitTemplateExpression(astnode* doc, Template *parent) {
	switch (doc->Type()) {
	case Node_TemplateExprId: {
		if (!_fields.count(doc->Children().at(0)->String())) {
			throw std::logic_error("Field '" + std::string(doc->Children().at(0)->String()) + "' does not exist");
		}
		const FieldDescriptor &field = _fields.at(doc->Children().at(0)->String());
		return new FieldTemplateChunk(field);
	}
	
	case Node_TemplateExprDot: {
		return new ThisTemplateChunk();
	}

	case Node_TemplateExprPlus: {
		return new BinaryExpressionTemplateChunk(
			BinaryExpressionTemplateChunk::PLUS,
			*VisitTemplateExpression(doc->Children().at(0), parent),
			*VisitTemplateExpression(doc->Children().at(1), parent)
		);
	}
	
	case Node_TemplateExprPercent: {
		return new BackRefTemplateChunk(*parent->GetChunkByIndex(std::stol(doc->Children().at(0)->String())));
	}
	
	default:
		throw std::logic_error("Unsupported field expression node");
	}
}

void TemplateParser::VisitFieldStatement(astnode *doc) {
	const char *fieldname = doc->Children().at(0)->String();
	FieldDescriptor &field = _fields[fieldname];
	
	astnode *chunks = doc->Children().at(1);
	VisitFieldBodyList(chunks, &field);
}

void TemplateParser::VisitFieldBodyList(astnode *doc, FieldDescriptor *field) {
	for(auto i : doc->Children()) {
		switch(i->Type()) {
			case Node_FieldBodyItemText: 
				VisitFieldBodyItemText(i, field);
				break;
			case Node_FieldBodyItemGenerator:
				throw std::logic_error("Unimplemented");
			default:
				throw std::logic_error("");
		}
	}
}

void TemplateParser::VisitFieldBodyItemText(astnode *doc, FieldDescriptor *field) {
	field->AddValue(doc->Children().at(0)->String());
}
