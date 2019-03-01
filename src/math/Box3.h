#pragma once

namespace THREE
{
	class Box3
	{
	public:
		Box3();
		Box3(const Vector3& iMin, const Vector3& iMax);
		~Box3();

	public:
		Box3& set(const Vector3& iMin, const Vector3& iMax);
		Box3& setFromPoints(const Vector3* iPoints, const int& iCount);
		Box3& setFromCenterAndSize(const Vector3& center, const float& size);
		Box3 clone() const;
		Box3& copy(const Box3& box);
		Box3& makeEmpty();
		bool isEmpty() const;
		Vector3 getCenter() const;
		Vector3 getSize() const;
		Box3& expandByPoint(const Vector3& point);
		Box3& expandByVector(const Vector3& vector);
		Box3& expandByScalar(const float& val);
		bool containsPoint(const Vector3& point) const;
		bool containsBox(const Box3& box) const;
		bool intersectsBox(const Box3& box) const;
		float distanceToPoint(const Vector3& point) const;
		Box3& translate(const Vector3& offset);

		bool operator==(const Box3& box) const;

	private:
		Vector3 m_min, m_max;
	};
}