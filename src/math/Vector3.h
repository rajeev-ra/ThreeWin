#pragma once

namespace THREE
{
	class Camera;
	class THREEDLL Vector3
	{
	public:
		static Vector3 cross(const Vector3& a, const Vector3& b);
		static float dot(const Vector3& a, const Vector3& b);
		static float distance(const Vector3& a, const Vector3& b);
		static float angle(const Vector3& a, const Vector3& b);

	public:
		Vector3(const float& x = 0.0f, const float& y = 0.0f, const float& z = 0.0f);
		~Vector3();

	public:
		void set(const float& x, const float& y, const float& z);
		void setScalar(const float& v);
		void setX(const float& x);
		void setY(const float& y);
		void setZ(const float& z);
		Vector3 clone() const;
		void copy(const Vector3& v);
		void add(const Vector3& v);
		void add(const float& v);
		void sub(const Vector3& v);
		void sub(const float& v);
		void multiply(const Vector3& v);
		void multiply(const float& v);
		void divide(const Vector3& v);
		void divide(const float& v);
		void applyEuler(const Euler& e);
		void applyAxisAngle(const Vector3& axis, const float& angle);
		void applyMatrix(const Matrix3& m);
		void applyMatrix(const Matrix4& m);
		void applyQuaternion(const Quaternion& q);
		void project(const Camera& c);
		void unproject(const Camera& c);
		void transformDirection(const Matrix4& m);
		void clamp(const Vector3& min, const Vector3& max);
		void clamp(const float& min, const float& max);
		void clampLength(const float& min, const float& max);
		void negate();
		float dot() const;
		float lengthSq() const;
		float length() const;
		float manhattanLength() const;
		void normalize();
		void setLength(const float& l);
		bool operator==(const Vector3& v) const;
		Vector3 operator*(const Vector3& v) const;
		Vector3 operator*(const float& v) const;

	private:
		float m_x, m_y, m_z;
	};
}