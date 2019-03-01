#pragma once

namespace THREE
{
	class THREEDLL Vector2
	{
	public:
		static Vector2 cross(const Vector2& a, const Vector2& b);
		static float dot(const Vector2& a, const Vector2& b);
		static float distance(const Vector2& a, const Vector2& b);
		static float angle(const Vector2& a, const Vector2& b);

	public:
		Vector2(const float& x = 0.0f, const float& y = 0.0f);
		~Vector2();

	public:
		void set(const float& x, const float& y);
		void setScalar(const float& v);
		void setX(const float& x);
		void setY(const float& y);
		Vector2 clone() const;
		void copy(const Vector2& v);
		void add(const Vector2& v);
		void add(const float& v);
		void sub(const Vector2& v);
		void sub(const float& v);
		void multiply(const Vector2& v);
		void multiply(const float& v);
		void divide(const Vector2& v);
		void divide(const float& v);
		void clamp(const Vector2& min, const Vector2& max);
		void clamp(const float& min, const float& max);
		void clampLength(const float& min, const float& max);
		void negate();
		float dot() const;
		float lengthSq() const;
		float length() const;
		float manhattanLength() const;
		void normalize();
		void setLength(const float& l);
		bool operator==(const Vector2& v) const;
		Vector2 operator*(const Vector2& v) const;
		Vector2 operator*(const float& v) const;

	private:
		float m_x, m_y;
	};
}