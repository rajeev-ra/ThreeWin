#pragma once

namespace THREE
{
	class BufferAttribute
	{
	public:
		BufferAttribute(const float* arr, const unsigned int& len, const bool& normalized);
		BufferAttribute(const unsigned int* arr, const unsigned int& len, const bool& normalized);
		~BufferAttribute();

	public:
		BufferAttribute& set(const float* arr, const unsigned int& len);
		BufferAttribute& set(const unsigned int* arr, const unsigned int& len);
		BufferAttribute& setDynamic(const bool& val);
	};


	class Int8BufferAttribute : public BufferAttribute
	{

	};

	class UInt8BufferAttribute : public BufferAttribute
	{

	};

	class Int16BufferAttribute : public BufferAttribute
	{

	};

	class UInt16BufferAttribute : public BufferAttribute
	{

	};

	class Int32BufferAttribute : public BufferAttribute
	{

	};

	class UInt32BufferAttribute : public BufferAttribute
	{

	};

	class Int64BufferAttribute : public BufferAttribute
	{

	};

	class UInt64BufferAttribute : public BufferAttribute
	{

	};

	class Float32BufferAttribute : public BufferAttribute
	{

	};

	class Float64BufferAttribute : public BufferAttribute
	{

	};
}