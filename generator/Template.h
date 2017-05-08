#ifndef _TEMPLATE_COLLECTION_H
#define _TEMPLATE_COLLECTION_H

#include <map>
#include <vector>

#include "FieldDescriptor.h"

class TemplateChunk
{
public:
	virtual ~TemplateChunk();
};

class StringTemplateChunk : public TemplateChunk
{
public:
	StringTemplateChunk(std::string data) : _data(data) {};
	std::string Get() const { return _data; }
	
private:
	std::string _data;
};

class FieldTemplateChunk : public TemplateChunk
{
public:
	FieldTemplateChunk(const FieldDescriptor &descriptor) : _descriptor(descriptor) {}
	const FieldDescriptor &Get() const { return _descriptor; }
private:
	const FieldDescriptor &_descriptor;
};

class Template
{
public:
	typedef std::vector<TemplateChunk*> container_t;
	container_t::iterator begin() { return _chunks.begin(); }
	container_t::const_iterator begin() const { return _chunks.begin(); }
	container_t::iterator end() { return _chunks.end(); }
	container_t::const_iterator end() const { return _chunks.end(); }
	
	void AddChunk(TemplateChunk *chunk) { _chunks.push_back(chunk); }
	
private:
	container_t _chunks;
};

typedef std::vector<Template> TemplateCollection;

#endif
