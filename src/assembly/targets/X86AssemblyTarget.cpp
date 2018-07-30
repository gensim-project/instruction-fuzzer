/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "assembly/AssemblyTarget.h"
#include "util/ComponentManager.h"

class X86AssemblyTarget : public AssemblyTarget
{
public:
	X86AssemblyTarget(std::ostream &target);
	
	virtual void PrintHeader() override;
	virtual void PrintFooter() override;
	
	virtual void PrintBareTemplate(const Template &) override;
	virtual void PrintTemplate(const Template &) override;
};

X86AssemblyTarget::X86AssemblyTarget(std::ostream &target) : AssemblyTarget(target)
{
	
}

void X86AssemblyTarget::PrintHeader()
{
	print(".text\n");
	
	print(".globl instructions_begin\n");
	print("instructions_begin:\n");
}

void X86AssemblyTarget::PrintFooter()
{
	print(".globl instructions_end\n");
	print("instructions_end:\n");
	print(".word 0\n");
	print("instructions_count:\n");
	//print(".word %u\n", GetProcessedTemplateCount());
}

void X86AssemblyTarget::PrintBareTemplate(const Template &t)
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

int GetContextId(const std::string &str)
{
	if(str == "bdiv") { 
		return 1;
	} else if(str == "wdiv") {
		return 2;
	} else if(str == "ddiv") {
		return 3;
	} else if(str == "qdiv") {
		return 4;
	}
	
	return 0;
}

void X86AssemblyTarget::PrintTemplate(const Template &t)
{
	// Prefix each instruction with its size
	
	print(".byte 2f-1f\n");
	print(".byte %u\n", GetContextId(t.GetContext()));
	print("1:\n");
	PrintBareTemplate(t);
	print("\n");
	print("2:\n");
}

RegisterComponent(AssemblyTarget, X86AssemblyTarget, "x86", "x86", std::ostream &);
