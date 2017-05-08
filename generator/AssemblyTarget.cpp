#include "AssemblyTarget.h"
#include "ComponentManager.h"

#include <cstdarg>

DefineComponentType(AssemblyTarget, std::ostream&)

RegisterComponent(AssemblyTarget, ARMAssemblyTarget, "arm", "ARM", std::ostream &);
RegisterComponent(AssemblyTarget, ThumbAssemblyTarget, "thumb2", "Thumb-2", std::ostream &);

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

ARMAssemblyTarget::ARMAssemblyTarget(std::ostream &target) : AssemblyTarget(target)
{
	
}

void ARMAssemblyTarget::PrintHeader()
{
	print(".arm\n");
	print(".fpu neon\n");
	print(".syntax unified\n");
	
	print(".globl instructions_begin\n");
	print("instructions_begin:\n");
}

void ARMAssemblyTarget::PrintFooter()
{
	print(".globl instructions_end\n");
	print("instructions_count:\n");
	//print(".word %u\n", GetProcessedTemplateCount());
}

void ARMAssemblyTarget::PrintTemplate(const Template &t)
{
	// Prefix each instruction with its size
	
	print(".byte 2f-1f\n");
	print("1:\n");
	for(auto &chunk : t) {
		if(auto string_chunk = dynamic_cast<const StringTemplateChunk*>(chunk)) {
			print("%s", string_chunk->Get().c_str());
		} else if(auto field_chunk = dynamic_cast<const FieldTemplateChunk*>(chunk)) {
			const auto &chunk = field_chunk->Get();
			uint32_t index = rand() % chunk.CountValues();
			print("%s", chunk.Get(index).c_str());
		}
	}
	print("\n");
	print("2:\n");
}

ThumbAssemblyTarget::ThumbAssemblyTarget(std::ostream &target) : ARMAssemblyTarget(target)
{
	
}

void ThumbAssemblyTarget::PrintHeader()
{
	print(".thumb\n");
	print(".syntax unified\n");
	print(".fpu neon\n");
	print(".globl instructions_begin\n");
	print("instructions_begin:\n");
}
