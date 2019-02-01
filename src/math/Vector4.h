#pragma once

namespace THREE
{
	class Vector4
	{
	public:
		static Vector4 cross(const Vector4& a, const Vector4& b);
		static float dot(const Vector4& a, const Vector4& b);
		static float distance(const Vector4& a, const Vector4& b);
		static float angle(const Vector4& a, const Vector4& b);

	public:
		Vector4(const float& x = 0.0f, const float& y = 0.0f, const float& z = 0.0f, const float& w = 0.0f);
		~Vector4();

	public:
		void set(const float& x, const float& y, const float& z, const float& w);
		void setScalar(const float& v);
		void setX(const float& x);
		void setY(const float& y);
		void setZ(const float& z);
		Vector4 clone() const;
		void copy(const Vector4& v);
		void add(const Vector4& v);
		void add(const float& v);
		void sub(const Vector4& v);
		void sub(const float& v);
		void multiply(const Vector4& v);
		void multiply(const float& v);
		void divide(const Vector4& v);
		void divide(const float& v);
		void clamp(const float& min, const float& max);
		void clampLength(const float& min, const float& max);
		void negate();
		float dot() const;
		float lengthSq() const;
		float length() const;
		float manhattanLength() const;
		void normalize();
		void setLength(const float& l);

	private:
		float m_x, m_y, m_z, m_w;
	};
}