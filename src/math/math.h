#pragma once

namespace THREE
{
	class THREEDLL Math
	{
	public:
		static const float DEG2RAD;
		static const float RAD2DEG;

	public:
		static char* generateUUIDA();
		static wchar_t* generateUUIDW();

		static float clamp(const float& value, const float& min, const float& max);

		static int euclideanModulo(const int& n, const int& m);

		static float mapLinear(const float& x, const float& a1, const float& a2,
			const float& b1, const float& b2);

		static float lerp(const float& x, const float& y, const float& t);

		static float smoothstep(float x, const float& min, const float& max);

		static float smootherstep(float x, const float& min, const float& max);

		static int randInt(const int& low, const int& high);

		static float randFloat(const float& low, const float& high);

		static float randFloatSpread(const float& range);

		static float degToRad(const float& degrees);

		static float radToDeg(const float& radians);

		static bool isPowerOfTwo(const int& value);

		static float ceilPowerOfTwo(const float& value);

		static float floorPowerOfTwo(const float& value);

	};
}