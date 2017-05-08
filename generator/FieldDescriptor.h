#ifndef _FIELD_DESCRIPTOR_H
#define _FIELD_DESCRIPTOR_H

class FieldDescriptor
{
public:
	FieldDescriptor(std::string name) : _name(name) {}
	
	const std::string &GetName() { return _name; }
	void AddValue(std::string value) { _values.push_back(value); }
	
	size_t CountValues() const { return _values.size(); }
	std::string Get(size_t index) const { return _values.at(index); }
	
private:
	std::string _name;
	std::vector<std::string> _values;
};

class FieldDescriptorCollection
{
public:
	FieldDescriptor &operator[](const std::string &name) { 
		if(!_descriptors.count(name)) {
			_descriptors[name] = new FieldDescriptor(name);
		}
		return *_descriptors[name]; 
	}
	
	const FieldDescriptor &at(const std::string &name) const { return *_descriptors.at(name); }

	bool count(const std::string &name) const { return _descriptors.count(name); }
	
private:
	std::map<std::string, FieldDescriptor*> _descriptors;
};

#endif
