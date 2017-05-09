/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "../AssemblyTarget.h"
#include "../ComponentManager.h"

class ARMAssemblyTarget : public AssemblyTarget
{
public:
	ARMAssemblyTarget(std::ostream &target);
	
	virtual void PrintHeader() override;
	virtual void PrintFooter() override;
	
	virtual void PrintTemplate(const Template &) override;
};

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

RegisterComponent(AssemblyTarget, ARMAssemblyTarget, "arm", "ARM", std::ostream &);
