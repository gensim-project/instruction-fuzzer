
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

#include "templates/TemplateParser.h"
#include "assembly/AssemblyTarget.h"
#include "util/ComponentManager.h"

int main(int argc, char **argv)
{
	std::vector<std::string> template_files;
	
	int arch_idx = 1;
	int length_idx = 2;
	int templates_idx = 3;
	
	for(int i = templates_idx; i < argc; ++i) {
		template_files.push_back(argv[i]);
	}
	
	TemplateParser parser;
	
	for(auto i : template_files) {
		if(!parser.Parse(i.c_str())) {
			std::cerr << "Failed to parse " << i << std::endl;
			return 1;
		}
	}
	
	// instantiate assembly printer
	AssemblyTarget *as;
	if(!GetComponentInstance<AssemblyTarget, std::ostream&>(argv[arch_idx], as, std::cout)) {
		fprintf(stderr, "Could not instantiate assembly format %s\n", argv[arch_idx]);
		return 1;
	}
	int count = strtol(argv[length_idx], nullptr, 10);
	
	as->PrintHeader();
	auto &templates = parser.Get();
	for(int i = 0; i < count; ++i) {
		as->PrintTemplate(templates.at(rand() % templates.size()));
	}
	as->PrintFooter();
	
	return 0;
}
