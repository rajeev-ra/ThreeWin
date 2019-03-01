#pragma once

namespace THREE
{
	class Line3
	{
	public:
		Line3();
		Line3(const Vector3& start, const Vector3& end);

	public:
		Line3& set(const Vector3& start, const Vector3& end);
		Vector3 getCenter() const;
		Vector3 delta() const;


	private:
		Vector3 m_start, m_end;
	};
}