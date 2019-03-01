#pragma once

namespace THREE
{
	class Face3
	{
	public:
		Face3(const unsigned int& a, const unsigned int& b, const unsigned int& c);
		Face3(const unsigned int& a, const unsigned int& b, const unsigned int& c,
			const Vector3& normal, const Color& color, const unsigned int& material);

	public:
		Face3& set(const unsigned int& a, const unsigned int& b, const unsigned int& c,
			const Vector3& normal, const Color& color, const unsigned int& material);
	public:
	private:
		unsigned int m_a, m_b, m_c;
		Vector3 m_n;
		Color m_color;
		unsigned int m_material;
	};
}