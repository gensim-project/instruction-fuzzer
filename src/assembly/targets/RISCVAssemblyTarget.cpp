/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "assembly/AssemblyTarget.h"
#include "util/ComponentManager.h"

class RISCVAssemblyTarget : public AssemblyTarget
{
public:
	RISCVAssemblyTarget(std::ostream &target);
	
	virtual void PrintHeader() override;
	virtual void PrintFooter() override;
	
	virtual void PrintBareTemplate(const Template &) override;
	virtual void PrintTemplate(const Template &) override;
};

RISCVAssemblyTarget::RISCVAssemblyTarget(std::ostream &target) : AssemblyTarget(target)
{
	
}

void RISCVAssemblyTarget::PrintHeader()
{	
	print(".globl instructions_begin\n");
	print("instructions_begin:\n");
}

void RISCVAssemblyTarget::PrintFooter()
{
	print(".globl instructions_end\n");
	print("instructions_count:\n");
	//print(".word %u\n", GetProcessedTemplateCount());
}

void RISCVAssemblyTarget::PrintBareTemplate(const Template &t)
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

void RISCVAssemblyTarget::PrintTemplate(const Template &t)
{
	// Prefix each instruction with its size
	
	// just hack this for now since the assembler doesn't seem to be doing its job properly
	print(".byte 0x4\n");
	print("1:\n");
	PrintBareTemplate(t);
	print("\n");
	print("2:\n");
}

RegisterComponent(AssemblyTarget, RISCVAssemblyTarget, "riscv", "RISC-V", std::ostream &);
