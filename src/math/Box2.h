#pragma once

namespace THREE
{
	class Box2
	{
	public:
		Box2();
		Box2(const Vector2& iMin, const Vector2& iMax);
		~Box2();

	public:
		Box2& set(const Vector2& iMin, const Vector2& iMax);
		Box2& setFromPoints(const Vector2* iPoints, const int& iCount);
		Box2& setFromCenterAndSize(const Vector2& center, const float& size);
		Box2 clone() const;
		Box2& copy(const Box2& box);
		Box2& makeEmpty();
		bool isEmpty() const;
		Vector2 getCenter() const;
		Vector2 getSize() const;
		Box2& expandByPoint(const Vector2& point);
		Box2& expandByVector(const Vector2& vector);
		Box2& expandByScalar(const float& val);
		bool containsPoint(const Vector2& point) const;
		bool containsBox(const Box2& box) const;
		bool intersectsBox(const Box2& box) const;
		float distanceToPoint(const Vector2& point) const;
		Box2& translate(const Vector2& offset);

		bool operator==(const Box2& box) const;

	private:
		Vector2 m_min, m_max;
	};
}