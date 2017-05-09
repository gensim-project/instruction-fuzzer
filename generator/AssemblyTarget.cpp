#include "AssemblyTarget.h"
#include "ComponentManager.h"

#include <cstdarg>

DefineComponentType(AssemblyTarget, std::ostream&)

AssemblyTarget::AssemblyTarget(std::ostream &target) : _target(target), _count_per_template(10)
{
	
}

void AssemblyTarget::print(const char *t, ...)
{
	va_list args;
	va_start(args, t);
	
	char buffer[256];
	vsnprintf(buffer, 256, t, args);
	_target << buffer;
	
	va_end(args);
}

void AssemblyTarget::PrintTemplateCollection(const TemplateCollection &templates)
{
	_processed_templates = 0;
	PrintHeader();
	
	for(const auto &t : templates)
	{
		uint32_t count = _count_per_template;
		while(count--) {
			PrintTemplate(t);
			_processed_templates++;
		}
	}
	
	PrintFooter();
}
