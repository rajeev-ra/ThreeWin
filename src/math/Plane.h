#pragma once

namespace THREE
{
	class Sphere;
	class Line3;
	class Box3;
	class Matrix4;

	class THREEDLL Plane
	{
	public:
	public:
		Plane& set(const Vector3& normal, const float& constant);
		Plane& set(const float& x, const float& y, const float& z, const float& w);
		Plane& setFromNormalAndCoplanarPoint(const Vector3& normal, const Vector3& point);
		Plane& setFromCoplanarPoints(const Vector3& a, const Vector3& b, const Vector3& c);
		Plane& copy(const Plane& plane);
		Plane& normalize();
		Plane& negate();
		float distanceToPoint(const Vector3& point) const;
		float distanceToSphere(const Sphere& sphere) const;
		Vector3 projectPoint(const Vector3& point) const;
		bool intersectLine(const Line3& line, Vector3& intersection) const;
		bool intersectsLine(const Line3& line) const;
		bool intersectsBox(const Box3& box) const;
		bool intersectsSphere(const Sphere& sphere) const;
		Vector3 coplanarPoint() const;
		Plane& applyMatrix4(const Matrix4* mat);
		Plane& translate(const Vector3& offset);

		bool operator==(const Plane& plane) const;
		Plane& operator=(const Plane& plane);

	private:
		Vector3 m_normal;
		float m_constant;
	};
}