#ifndef _TEST_DESCRIPTOR_H
#define _TEST_DESCRIPTOR_H

#include <cstdint>
#include <cstring>

class Descriptor
{
public:
	Descriptor(uint32_t size, uint8_t *data, uint8_t context) : _size(size), context_(context) {
		_data = new uint8_t[size];
		memcpy(_data, data, _size);
	}
	
	~Descriptor()
	{
		delete[] _data;
	}
	
	void CopyTo(uint8_t *dest) const { memcpy(dest, _data, _size); }
	uint32_t GetSize() const { return _size; }
	uint8_t GetContext() const { return context_; }

private:
	uint32_t _size;
	uint8_t *_data;
	uint8_t context_;
};

#endif
