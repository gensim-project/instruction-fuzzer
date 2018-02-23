#include "fuzzer-parser.h"
#include "templates/TemplateParser.h"

#include <cassert>
#include <cstring>

astnode::astnode(NodeType type) : _type(type) {
	
}

void astnode::AddChild(astnode *child) {
	assert(child != nullptr);
	_children.push_back(child);
}

void astnode::SetData(uint64_t data) {
	assert(Type() == Node_U64);
	_data.i = data;
}

void astnode::SetData(const char *data) {
	assert(Type() == Node_String);
	_data.s = data;
}


void parse_file(TemplateParser *parser, const char *filename) {
	parser->Parse(filename);
}
