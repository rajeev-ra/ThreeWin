#pragma once

#include "core\Geometry.h"

namespace THREE
{
	class BoxGeometry : public Geometry
	{
	public:
		BoxGeometry(const float& width, const float& height, const float& depth,
			int widthSegments = 1, int heightSegments = 1, int depthSegments = 1);

		~BoxGeometry();

	public:

	};
}