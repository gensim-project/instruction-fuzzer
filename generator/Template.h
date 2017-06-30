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

class ThisTemplateChunk : public TemplateChunk
{
public:
	ThisTemplateChunk() {}
};

class BackRefTemplateChunk : public TemplateChunk
{
public:
	BackRefTemplateChunk(const TemplateChunk& ref) : _ref(ref) {}
	
	const TemplateChunk& Ref() const { return _ref; }
	
private:
	const TemplateChunk& _ref;
};

class BinaryExpressionTemplateChunk : public TemplateChunk
{
public:
	enum ExpressionKind
	{
		PLUS
	};
	
	BinaryExpressionTemplateChunk(ExpressionKind kind, const TemplateChunk& lhs, const TemplateChunk& rhs) : _kind(kind), _lhs(lhs), _rhs(rhs) { }

	ExpressionKind GetKind() const { return _kind; }
	
	const TemplateChunk& LHS() const { return _lhs; }
	const TemplateChunk& RHS() const { return _rhs; }
	
private:
	ExpressionKind _kind;
	const TemplateChunk& _lhs;
	const TemplateChunk& _rhs;
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
	TemplateChunk *GetChunkByIndex(int index) const { return _chunks.at(index); }
private:
	container_t _chunks;
};

typedef std::vector<Template> TemplateCollection;

#endif
