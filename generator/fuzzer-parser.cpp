#include "fuzzer-parser.h"
#include "TemplateParser.h"

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
	assert(filename[0] == '<');
	assert(filename[strlen(filename)-1] == '>');
	char *fname = strdup(filename+1);
	fname[strlen(fname)-1] = '\0';
	parser->Parse(fname);
	free(fname);
}
