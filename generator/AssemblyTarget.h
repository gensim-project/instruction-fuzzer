#ifndef _ASSEMBLY_TARGET_H
#define _ASSEMBLY_TARGET_H

#include "Template.h"

#include <ostream>

class AssemblyTarget
{
public:
	AssemblyTarget(std::ostream &target);
	
	virtual void PrintHeader() = 0;
	virtual void PrintFooter() = 0;
	
	virtual void PrintTemplate(const Template &) = 0;
	virtual void PrintTemplateCollection(const TemplateCollection &);
	
	void SetCountPerTemplate(uint32_t i) { _count_per_template = i; }
	uint32_t GetProcessedTemplateCount() const { return _processed_templates; }
	
protected:
	void print(const char *t, ...);
	
private:
	std::ostream &_target;
	uint32_t _count_per_template;
	uint32_t _processed_templates;
};

#endif
