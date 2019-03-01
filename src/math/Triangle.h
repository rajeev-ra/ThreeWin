#pragma once

namespace THREE
{
	class Triangle
	{
	public:
		Triangle(const Vector3& a, const Vector3& b, const Vector3& c);
		Triangle(const Triangle& t);

	public:
		Vector3 getNormal();


	private:
		Vector3 m_a, m_b, m_c;
	};
}