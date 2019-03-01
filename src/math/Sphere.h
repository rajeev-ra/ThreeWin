#pragma once

namespace THREE
{
	class Box3;
	class Plane;
	class Matrix4;
	class Sphere
	{
	public:
		Sphere();
		Sphere(const Sphere& sphere);
		Sphere(const Vector3& center, const float& radius);

	public:
		Sphere& set(const Vector3& center, const float& radius);
		Sphere& copy(const Sphere& sphere);
		bool containsPoint(const Vector3& point) const;
		float distanceToPoint(const Vector3& point) const;
		bool intersectsSphere(const Sphere& sphere) const;
		bool intersectsBox(const Box3& box) const;
		bool intersectsPlane(const Plane& plane) const;
		Vector3 clampPoint(Vector3& point) const;
		Box3 getBoundingBox() const;
		Sphere& applyMatrix4(const Matrix4& mat);
		Sphere& translate(const Vector3& offset);

		bool operator==(const Sphere& plane) const;
		Sphere& operator=(const Sphere& plane);

	private:
		Vector3 m_center;
		float m_radius;
	};
}