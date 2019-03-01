#pragma once

namespace THREE
{
	class Cylindrical
	{
	public:
		Cylindrical();
		Cylindrical(const Cylindrical& c);
		Cylindrical(const float& radius, const float& theta, const float& height);

	public:
		Cylindrical& set(const float& radius, const float& theta, const float& height);
		Cylindrical& setFromVector3(const Vector3& v);
		Cylindrical& setFromCartesianCoords(const float& x, const float& y, const float& z);

		bool operator==(const Cylindrical& c) const;
		Cylindrical& operator=(const Cylindrical& c);

	private:
		float m_radius,
			m_theta,
			m_height;
	};
}