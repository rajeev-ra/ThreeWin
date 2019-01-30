#pragma once

namespace THREE
{
	class THREEDLL Matrix4
	{
	public:

	public:
		Matrix4();
		Matrix4(const Matrix4& m);
		~Matrix4();

	public:
		void set(const float & n11, const float & n12, const float & n13, const float & n14,
			const float & n21, const float & n22, const float & n23, const float & n24,
			const float & n31, const float & n32, const float & n33, const float & n34,
			const float & n41, const float & n42, const float & n43, const float & n44);

		void identity();

		Matrix4 clone() const;

		void copy(const Matrix4& m);

		void copyPosition(const Matrix4& m);



	private:
		float m_e[16];
	};
}