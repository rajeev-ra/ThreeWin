#include "stdafx.h"
#include "math\math.h"

#define PI_F 3.14159265358979f

const float THREE::Math::DEG2RAD = PI_F / 180.0f;
const float THREE::Math::RAD2DEG = 180.0f / PI_F;

char * THREE::Math::generateUUIDA()
{
	return nullptr;
}

wchar_t * THREE::Math::generateUUIDW()
{
	return nullptr;
}

float THREE::Math::clamp(const float & value, const float & minv, const float & maxv)
{
	return max(minv, min(maxv, value));
}

int THREE::Math::euclideanModulo(const int & n, const int & m)
{
	return ((n % m) + m) % m;
}

float THREE::Math::mapLinear(const float & x, const float & a1, const float & a2, const float & b1, const float & b2)
{
	return b1 + (((x - a1) * (b2 - b1)) / (a2 - a1));
}

float THREE::Math::lerp(const float & x, const float & y, const float & t)
{
	return ((1 - t) * x) + (t * y);
}

float THREE::Math::smoothstep(float x, const float & min, const float & max)
{
	if (x <= min) return 0;
	if (x >= max) return 1;

	x = (x - min) / (max - min);

	return x * x * (3 - 2 * x);
}

float THREE::Math::smootherstep(float x, const float & min, const float & max)
{
	if (x <= min) return 0;
	if (x >= max) return 1;

	x = (x - min) / (max - min);

	return x * x * x * (x * (x * 6 - 15) + 10);
}

int THREE::Math::randInt(const int & low, const int & high)
{
	return low;
}

float THREE::Math::randFloat(const float & low, const float & high)
{
	return low;
}

float THREE::Math::randFloatSpread(const float & range)
{
	return 0.0f;
}

float THREE::Math::degToRad(const float & degrees)
{
	return degrees * THREE::Math::DEG2RAD;
}

float THREE::Math::radToDeg(const float & radians)
{
	return radians * THREE::Math::RAD2DEG;
}

bool THREE::Math::isPowerOfTwo(const int & value)
{
	return (value & (value - 1)) == 0 && value != 0;
}

float THREE::Math::ceilPowerOfTwo(const float & value)
{
	return 0.0f;
}

float THREE::Math::floorPowerOfTwo(const float & value)
{
	return 0.0f;
}
