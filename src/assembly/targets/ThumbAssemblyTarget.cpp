/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "assembly/AssemblyTarget.h"
#include "util/ComponentManager.h"

class ThumbAssemblyTarget : public AssemblyTarget
{
public:
	ThumbAssemblyTarget(std::ostream &target);
	
	virtual void PrintHeader() override;
	virtual void PrintFooter() override;
	
	virtual void PrintBareTemplate(const Template &) override;
	virtual void PrintTemplate(const Template &) override;
};


ThumbAssemblyTarget::ThumbAssemblyTarget(std::ostream &target) : AssemblyTarget(target)
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

void ThumbAssemblyTarget::PrintFooter()
{
	print(".globl instructions_end\n");
	print("instructions_count:\n");
	//print(".word %u\n", GetProcessedTemplateCount());
}

void ThumbAssemblyTarget::PrintBareTemplate(const Template &t)
{
	for(auto &chunk : t) {
		if(auto string_chunk = dynamic_cast<const StringTemplateChunk*>(chunk)) {
			print("%s", string_chunk->Get().c_str());
		} else if(auto field_chunk = dynamic_cast<const FieldTemplateChunk*>(chunk)) {
			const auto &chunk = field_chunk->Get();
			uint32_t index = rand() % chunk.CountValues();
			print("%s", chunk.Get(index).c_str());
		} else {
			print("???");
		}
	}
}

void ThumbAssemblyTarget::PrintTemplate(const Template &t)
{
	// Prefix each instruction with its size
	
	print(".byte 2f-1f\n");
	print("1:\n");
	PrintBareTemplate(t);
	print("\n");
	print("2:\n");
}

RegisterComponent(AssemblyTarget, ThumbAssemblyTarget, "thumb2", "Thumb-2", std::ostream &);
