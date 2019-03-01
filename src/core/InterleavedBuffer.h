#pragma once

namespace THREE
{
	class InterleavedBuffer
	{
	public:
		InterleavedBuffer(const float* arr, const unsigned int& len, const unsigned int& stride);
		~InterleavedBuffer();

	public:
		InterleavedBuffer& setArray(const float* arr, const unsigned int& len);
		InterleavedBuffer& setDynamic(const bool& val);
	};
}