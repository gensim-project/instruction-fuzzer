/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "assembly/AssemblyTarget.h"
#include "util/ComponentManager.h"

#include <map>

class ARMv8AssemblyTarget : public AssemblyTarget
{
public:
	ARMv8AssemblyTarget(std::ostream &target);
	
	virtual void PrintHeader() override;
	virtual void PrintFooter() override;
	
	virtual void PrintBareTemplate(const Template &) override;
	virtual void PrintTemplate(const Template &) override;

private:
	void PrintChunk(const TemplateChunk *, std::map<const TemplateChunk *, std::string>&);
	unsigned int LookupContextID(const std::string& context);
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
	//print(".word 0\n");
}

void ARMv8AssemblyTarget::PrintChunk(const TemplateChunk *chunk, std::map<const TemplateChunk *, std::string>& backrefs)
{
	if(auto string_chunk = dynamic_cast<const StringTemplateChunk*>(chunk)) {
		print("%s", string_chunk->Get().c_str());
	} else if(auto field_chunk = dynamic_cast<const FieldTemplateChunk*>(chunk)) {
		const auto &chunk = field_chunk->Get();
		uint32_t index = rand() % chunk.CountValues();
		
		backrefs[field_chunk] = chunk.Get(index);
		print("%s", chunk.Get(index).c_str());
	} else if(auto this_chunk = dynamic_cast<const ThisTemplateChunk*>(chunk)) {
		print(".");
	} else if(auto backref_chunk = dynamic_cast<const BackRefTemplateChunk*>(chunk)) {
		print("%s", backrefs.at(&backref_chunk->Ref()).c_str());
	} else if (auto bexp_chunk = dynamic_cast<const BinaryExpressionTemplateChunk *>(chunk)) {
		print("(");
		PrintChunk(&bexp_chunk->LHS(), backrefs);
		
		switch (bexp_chunk->GetKind()) {
		case BinaryExpressionTemplateChunk::PLUS: print(" + "); break;
		default: print(" ??? "); break;
		}
		
		PrintChunk(&bexp_chunk->RHS(), backrefs);
		print(")");
	}
}

void ARMv8AssemblyTarget::PrintBareTemplate(const Template &t)
{
	std::map<const TemplateChunk *, std::string> backrefs;
	for(auto &chunk : t) {
		PrintChunk(chunk, backrefs);
	}
}

void ARMv8AssemblyTarget::PrintTemplate(const Template &t)
{
	// Prefix each instruction with its size and context id
	print(".word 2f-1f\n");
	print(".word %u\n", LookupContextID(t.GetContext()));
	print("1:\n");
	PrintBareTemplate(t);
	print("\n");
	print("2:\n");
}

unsigned int ARMv8AssemblyTarget::LookupContextID(const std::string& context)
{
	if (context == "floating-point-32") {
		return 1;
	} else if (context == "floating-point-64") {
		return 2;
	} else if (context == "floating-point-32-nans") {
		return 3;
	} else if (context == "floating-point-64-nans") {
		return 4;
	} else if (context == "floating-point-32-infs") {
		return 5;
	} else if (context == "floating-point-64-infs") {
		return 6;
	}
	
	return 0;
}


RegisterComponent(AssemblyTarget, ARMv8AssemblyTarget, "armv8", "ARMv8", std::ostream &);
