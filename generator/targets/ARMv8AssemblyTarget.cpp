/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "../AssemblyTarget.h"
#include "../ComponentManager.h"

class ARMv8AssemblyTarget : public AssemblyTarget
{
public:
	ARMv8AssemblyTarget(std::ostream &target);
	
	virtual void PrintHeader() override;
	virtual void PrintFooter() override;
	
	virtual void PrintTemplate(const Template &) override;
};

ARMv8AssemblyTarget::ARMv8AssemblyTarget(std::ostream &target) : AssemblyTarget(target)
{
	
}

void ARMv8AssemblyTarget::PrintHeader()
{
	print(".data\n");
	
	print(".globl instructions_begin\n");
	print("instructions_begin:\n");
}

void ARMv8AssemblyTarget::PrintFooter()
{
	print(".globl instructions_end\n");
	print("instructions_count:\n");
	//print(".word %u\n", GetProcessedTemplateCount());
}

void ARMv8AssemblyTarget::PrintTemplate(const Template &t)
{
	// Prefix each instruction with its size
	
	print(".word 2f-1f\n");
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

RegisterComponent(AssemblyTarget, ARMv8AssemblyTarget, "armv8", "ARMv8", std::ostream &);
