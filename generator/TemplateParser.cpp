#include "TemplateParser.h"

#include <fstream>
#include <sstream>

bool TemplateParser::Parse(std::ifstream &input)
{		
	// Read lines of input file
	std::vector<std::string> lines;
	std::string line;
	while(input.good() && std::getline(input, line)) {
		lines.push_back(line);
	}
	
	// Parse lines one at a time
	int lineno = 0;
	for(const auto &line : lines) {
		lineno++;
		if(line.find("field") == 0) {
			if(!ParseField(line))  {
				fprintf(stderr, "Error at line %u\n", lineno);
				return false;
			}
		}
		if(line.find("template") == 0) {
			if(!ParseTemplate(line)) {
				fprintf(stderr, "Error at line %u\n", lineno);
				return false;
			}
		}
		if(line.find("include") == 0) {
			if(!ParseInclude(line)) {
				fprintf(stderr, "Error at line %u\n", lineno);
				return false;
			}
		}
	}
	
	return true;
}

TemplateCollection &TemplateParser::Get()
{
	return _templates;
}

std::vector<std::string> tokenize_field(const std::string &line)
{
	std::vector<std::string> chunks;
	std::string chunk;
	
	bool in_quotes = false;
	
	for(auto i : line) {
		if(i == ' ' && !in_quotes) {
			if(chunk.size()) chunks.push_back(chunk);
			chunk = "";
		} else {
			if(i == '"') {
				if(in_quotes) {
					chunks.push_back(chunk);
					chunk = "";
				}
				in_quotes = !in_quotes;
			} else {
				chunk.push_back(i);
			}
		}
	}
	
	if(chunk.size()) chunks.push_back(chunk);
	
	return chunks;
}

bool TemplateParser::ParseField(const std::string &line)
{
	auto chunks = tokenize_field(line);
	
	if(chunks[0] != "field") {
		fprintf(stderr, "Field syntax error: %s\n", line.c_str());
		fprintf(stderr, "%s should be 'field'\n", chunks[0].c_str());
		return false;
	}
	
	FieldDescriptor fd (chunks[1]);
	for(size_t i = 2; i < chunks.size(); ++i) {
		fd.AddValue(chunks.at(i));
	}	
	
	_fields[chunks[1]] = fd;
	
	return true;
}

bool tokenize_template(const std::string &line, std::vector<std::string> &chunks) {
	std::string chunk;
	bool in_fieldspec = false;
	
	bool escaped = false;
	
	for(auto i : line) {
		if(i == '\\') {
			if(escaped) {
				chunk.push_back('\\');
				escaped = 0;
			} else {
				escaped = 1;
			}
		} else if(i == '[') {
			if(escaped) {
				chunk.push_back('\\');
				chunk.push_back('[');
				escaped = 0;
			} else {
				if(in_fieldspec) {
					fprintf(stderr, "Template format error\n");
					return false;
				}
				in_fieldspec = true;
				if(chunk.size())chunks.push_back(chunk);
				chunk = "[";
			}
		} else if(i == ']') {
			if(escaped) {
				chunk.push_back('\\');
				chunk.push_back(']');
				escaped = 0;
			} else {
				if(!in_fieldspec) {
					fprintf(stderr, "Template format error\n");
					return false;
				}
				in_fieldspec = false;
				chunk.push_back(i);
				if(chunk.size())chunks.push_back(chunk);
				chunk = "";
			}
		} else if(i == ' ') {
			chunk.push_back(' ');
			if(chunk.size())chunks.push_back(chunk);
			chunk = "";
		} else  {
			chunk.push_back(i);
		}
	}
	
	if(chunk.size()) chunks.push_back(chunk);
	
	return true;
}

bool TemplateParser::ParseTemplate(const std::string &line)
{
	std::vector<std::string> chunks;
	if(!tokenize_template(line, chunks)) return false;
	
	if(chunks[0] != "template ") {
		fprintf(stderr, "Field syntax error: %s\n", line.c_str());
		fprintf(stderr, "%s should be 'template'\n", chunks[0].c_str());
		return false;
	}
	
	Template t;
	
	for(size_t i = 1; i < chunks.size(); ++i) {
		const auto &chunk = chunks[i];
		
		fprintf(stderr, "Processing chunk %s\n", chunk.c_str());
		
		if(chunk[0] == '\\' && (chunk[1] == '[' || chunk[1] == ']')) {
			t.AddChunk(new StringTemplateChunk(chunk.substr(1)));
		} else if(chunk[0] == '[') {
			if(chunk[chunk.size()-1] != ']') {
				return false;
			}
			std::string strip_brackets = chunk.substr(1, chunk.size()-2);
			
			if(!_fields.count(strip_brackets)) {
				fprintf(stderr, "Could not find field type '%s'\n", strip_brackets.c_str());
				return false;
			}
			
			const auto &field = _fields.at(strip_brackets);
			t.AddChunk(new FieldTemplateChunk(field));
		} else {
			t.AddChunk(new StringTemplateChunk(chunk));
		}
	}
	
	_templates.push_back(t);
	return true;
}

bool TemplateParser::ParseInclude(const std::string &line) 
{
	std::string filename = line.substr(line.find(' ')+1, line.npos);
	std::ifstream incfile(filename, std::ios::in);
	
	if(!incfile.good()) {
		perror("Could not open included file");
		return false;
	}
	
	fprintf(stderr, "Processing included file %s\n", filename.c_str());
	return Parse(incfile);
}
