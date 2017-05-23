
#include <cstdlib>
#include <cstdint>
#include <cstdio>

#include "AssemblyTarget.h"
#include "ComponentManager.h"
#include "Template.h"
#include "TemplateParser.h"

#include <iostream>

int main(int argc, char **argv)
{
	if(argc < 3) {
		printf("Usage: %s [assembly format] [template file]\n", argv[0]);
		return 1;
	}

	TemplateParser parser;
	
	if(!parser.Parse(argv[2])) return 1;
	
	AssemblyTarget *assembler;
	if(!GetComponentInstance<AssemblyTarget, std::ostream&>(argv[1], assembler, std::cout)) {
		fprintf(stderr, "Could not instantiate assembly format %s\n", argv[1]);
		return 1;
	}
	assembler->PrintTemplateCollection(parser.Get());
	
	return 0;
}
