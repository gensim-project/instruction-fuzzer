#ifndef _TEMPLATE_PARSER_H
#define _TEMPLATE_PARSER_H

#include "Template.h"

#include <fstream>
#include <memory>

class TemplateParser
{
public:
	bool Parse(std::ifstream &input_file);
	
	TemplateCollection &Get();
private:
	bool ParseField(const std::string &line);
	bool ParseTemplate(const std::string &line);
	bool ParseInclude(const std::string &line);
	
	TemplateCollection _templates;
	FieldDescriptorCollection _fields;
};

#endif
