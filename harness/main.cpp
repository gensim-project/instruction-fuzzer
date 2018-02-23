#include <fstream>
#include <cstdlib>
#include <cstdint>
#include <cstring>

#include "Descriptor.h"
#include "Harness.h"

Descriptor *LoadTest(std::istream &str)
{
	str >> std::noskipws;
	
	uint8_t size;
	str >> size;
	
	uint8_t buffer[size];
	for(auto &i : buffer) {
		str >> i;
	}
	
	return new Descriptor(size, buffer);
}

void WriteResults(const Descriptor &test, const Descriptor &result, std::ostream &output)
{
	output << HarnessFormatResult(test, result);
	output.flush();
}

int main(int argc, char **argv)
{
	if(argc < 3) {
		printf("Usage: %s [fuzzer input] [runs per input] [output file]\n", argv[0]);
		return 1;
	}
	
	std::ifstream input(argv[1], std::ios::in | std::ios::binary);
	if(!input.good()) {
		perror("Could not open input file");
		return 1;
	}
	
	std::ofstream output(argv[3]);
	if(!output.good()) {
		perror("Could not open output file");
		return 1;
	}
	
	int runs_per_input = strtol(argv[2], NULL, 10);
	
	HarnessInitialize();
	
	Descriptor *result_descriptor;
	
	while(input.good()) {
		Descriptor *test = LoadTest(input);
		if(!input.good()) break;
		if(test->GetSize() == 0) break;
		
		int count = runs_per_input;
		HarnessPrepareTest(*test);
		while(count--) {
			HarnessRunTest(*test, result_descriptor);
			WriteResults(*test, *result_descriptor, output);
		}
	}
	
	HarnessShutdown();
	
	return 0;
}
