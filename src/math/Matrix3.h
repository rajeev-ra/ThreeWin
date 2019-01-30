#pragma once

namespace THREE
{
	class Matrix4;
	class THREEDLL Matrix3
	{
	public:
		static Matrix3 multiplyMatrices(const Matrix3& a, const Matrix3& b);
		static Matrix3 getInverse(const Matrix3& m);


	public:
		Matrix3();
		Matrix3(const Matrix3& m);
		~Matrix3();

	public:
		void set(const float& n11, const float& n12, const float& n13,
			const float& n21, const float& n22, const float& n23,
			const float& n31, const float& n32, const float& n33);

		void identity();

		Matrix3 clone() const;

		void copy(const Matrix3& m);

		void setFromMatrix4(const Matrix4& m);

		Matrix3 multiply(const Matrix3& m) const;

		Matrix3 premultiply(const Matrix3& m) const;

		void multiplyScalar(const float& v);

		float determinant() const;

		void transpose();

		bool operator==(const Matrix3& m);

		Matrix3& operator=(const Matrix3& m);

	private:
		float m_e[9];
	};
}