#pragma once

#include <cassert>
#include <stdint.h>
#include <vector>

class TemplateParser;

enum NodeType {
	Node_U64,
	Node_String,

	Node_Document,
	Node_Include,
	
	Node_Template,
	Node_TemplateChunkList,
	Node_TemplateChunkText,
	Node_TemplateChunkExpr,
	
	Node_TemplateExprId,
	Node_TemplateExprDot,
	Node_TemplateExprPlus,
	Node_TemplateExprPercent,
	
	Node_Field,
	Node_FieldBodyList,
	Node_FieldBodyItemText,
	Node_FieldBodyItemGenerator,
	
	Node_Context
};

class astnode {
public:
	astnode(NodeType type);

	void AddChild(astnode *child);
	void SetData(uint64_t data);
	void SetData(const char *data);

	const char *String() const { assert(Type() == Node_String); return _data.s; }
	uint64_t Integer() const { assert(Type() == Node_U64); return _data.i; }

	NodeType Type() const { return _type; }

	typedef std::vector<astnode*> child_vector_t;
	
	child_vector_t &Children() { return _children; }
private:
	NodeType _type;
	
	union {
		uint64_t i;
		const char *s;
	} _data;
	
	child_vector_t _children;
};

static inline astnode *CreateNode(NodeType t) { return new astnode(t); }
static inline astnode *CreateNodeU64(uint64_t t) { astnode *node = new astnode(Node_U64); node->SetData(t); return node; }
static inline astnode *CreateNodeStr(const char *t) { astnode *node = new astnode(Node_String); node->SetData(t); return node; }

void parse_file(TemplateParser *parser, const char *filename);
