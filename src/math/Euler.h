#pragma once

namespace THREE
{
	class Quaternion;
	class THREEDLL Euler
	{
	public:
		enum RotationOrder
		{
			eXYZ,
			eYZX,
			eZXY,
			eXZY,
			eYXZ,
			eZYX,
			eNNN
		};

	public:
		Euler(const float& x = 0.0f, const float& y = 0.0f, const float& z = 0.0f, const RotationOrder& order = eXYZ);
		~Euler();

	public:
		const float& x() const;
		const float& y() const;
		const float& z() const;

		void x(const float& v);
		void y(const float& v);
		void z(const float& v);

		const RotationOrder& order() const;
		void order(const RotationOrder& v);

		void set(const float& x, const float& y, const float& z, const RotationOrder& order = eNNN);

		Euler clone() const;

		void copy(const Euler& e);

		void setFromRotationMatrix(const Matrix4& m, const RotationOrder& order = eNNN);

		void setFromQuaternion(const Quaternion& q, const RotationOrder& order = eNNN);

		void setFromVector3(const Vector3& v, const RotationOrder& order = eNNN);

		bool operator==(const Euler& e);

		Vector3 toVector3() const;

	private:
		float m_x, m_y, m_z;
		RotationOrder m_order;
	};
}