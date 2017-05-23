#ifndef _TEMPLATE_PARSER_H
#define _TEMPLATE_PARSER_H

#include "Template.h"

#include <fstream>
#include <memory>

class astnode;

class TemplateParser
{
public:
	bool Parse(const char *filename);
	
	TemplateCollection &Get();
	
	void ProcessDocument(astnode *doc);
private:
	void VisitDocument(astnode *doc);
	
	void VisitTemplateStatement(astnode *doc);
	void VisitTemplateChunkList(astnode *doc, Template *parent);
	void VisitTemplateChunkText(astnode *doc, Template *parent);
	void VisitTemplateChunkField(astnode *doc, Template *parent);
	
	void VisitFieldStatement(astnode *doc);
	void VisitFieldBodyList(astnode *doc, FieldDescriptor *field);
	void VisitFieldBodyItemText(astnode *doc, FieldDescriptor *field);
	void VisitFieldBodyItemGenerator(astnode *doc, FieldDescriptor *field);
	
	TemplateCollection _templates;
	FieldDescriptorCollection _fields;
};

#endif
