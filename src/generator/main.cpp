
#include <cstdlib>
#include <cstdint>
#include <cstdio>

#include "assembly/AssemblyTarget.h"
#include "util/ComponentManager.h"
#include "templates/Template.h"
#include "templates/TemplateParser.h"

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
