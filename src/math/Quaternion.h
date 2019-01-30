#pragma once

namespace THREE
{
	class THREEDLL Quaternion
	{
	public:
	public:
		Quaternion(const float& x=0.0f, const float& y=0.0f, const float& z = 0.0f, const float& w = 1.0f);
		~Quaternion();

	public:

	private:
		float m_x, m_y, m_z, m_w;
	};
}