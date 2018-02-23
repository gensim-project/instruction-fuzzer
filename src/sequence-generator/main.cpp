
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
	int seed_idx = 3;
	int templates_idx = 4;
	
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
	
	srand(strtol(argv[seed_idx],nullptr, 10));
	as->PrintHeader();
	std::cout << ".byte 2f - 1f" << std::endl;
	std::cout << "1:" << std::endl;
	auto &templates = parser.Get();
	for(int i = 0; i < count; ++i) {
		as->PrintBareTemplate(templates.at(rand() % templates.size()));
		std::cout << std::endl;
	}
	std::cout << "2:" << std::endl;
	as->PrintFooter();
	
	return 0;
}
