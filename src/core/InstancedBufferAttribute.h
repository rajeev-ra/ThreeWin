#pragma once

#include "BufferAttribute.h"

namespace THREE
{
	class InstancedBufferAttribute : public BufferAttribute
	{
	public:
		InstancedBufferAttribute(const void* arr, const unsigned int& itemSize
			, const bool& normalized, const int meshPerAttribute = 1);

		~InstancedBufferAttribute();
	};
}