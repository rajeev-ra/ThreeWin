#include "stdafx.h"

THREE::Matrix3 THREE::Matrix3::multiplyMatrices(const Matrix3 & a, const Matrix3 & b)
{
	Matrix3 ret;
	const float* ae = a.m_e;
	const float* be = b.m_e;
	float* te = ret.m_e;

	const float &a11 = ae[0], &a12 = ae[3], &a13 = ae[6];
	const float &a21 = ae[1], &a22 = ae[4], &a23 = ae[7];
	const float &a31 = ae[2], &a32 = ae[5], &a33 = ae[8];

	const float &b11 = be[0], &b12 = be[3], &b13 = be[6];
	const float &b21 = be[1], &b22 = be[4], &b23 = be[7];
	const float &b31 = be[2], &b32 = be[5], &b33 = be[8];

	te[0] = a11 * b11 + a12 * b21 + a13 * b31;
	te[3] = a11 * b12 + a12 * b22 + a13 * b32;
	te[6] = a11 * b13 + a12 * b23 + a13 * b33;

	te[1] = a21 * b11 + a22 * b21 + a23 * b31;
	te[4] = a21 * b12 + a22 * b22 + a23 * b32;
	te[7] = a21 * b13 + a22 * b23 + a23 * b33;

	te[2] = a31 * b11 + a32 * b21 + a33 * b31;
	te[5] = a31 * b12 + a32 * b22 + a33 * b32;
	te[8] = a31 * b13 + a32 * b23 + a33 * b33;

	return ret;
}

THREE::Matrix3 THREE::Matrix3::getInverse(const Matrix3 & m)
{
	return Matrix3();
}

THREE::Matrix3::Matrix3()
{
	set(1, 0, 0, 0, 1, 0, 0, 0, 1);
}

THREE::Matrix3::Matrix3(const Matrix3 & m)
{
	set(m.m_e[0], m.m_e[1], m.m_e[2],
		m.m_e[3], m.m_e[4], m.m_e[5],
		m.m_e[6], m.m_e[7], m.m_e[8]);
}

THREE::Matrix3::~Matrix3()
{
}

void THREE::Matrix3::set(const float & n11, const float & n12, const float & n13,
	const float & n21, const float & n22, const float & n23,
	const float & n31, const float & n32, const float & n33)
{
	m_e[0] = n11; m_e[1] = n12; m_e[2] = n13;
	m_e[3] = n21; m_e[4] = n22; m_e[5] = n23;
	m_e[6] = n31; m_e[7] = n32; m_e[8] = n33;
}

void THREE::Matrix3::identity()
{
	set(1, 0, 0, 0, 1, 0, 0, 0, 1);
}

THREE::Matrix3 THREE::Matrix3::clone() const
{
	return Matrix3(*this);
}

void THREE::Matrix3::copy(const Matrix3 & m)
{
	set(m.m_e[0], m.m_e[1], m.m_e[2],
		m.m_e[3], m.m_e[4], m.m_e[5],
		m.m_e[6], m.m_e[7], m.m_e[8]);
}

void THREE::Matrix3::setFromMatrix4(const Matrix4 & m)
{
}

THREE::Matrix3 THREE::Matrix3::multiply(const Matrix3 & m) const
{
	return multiplyMatrices(*this, m);
}

THREE::Matrix3 THREE::Matrix3::premultiply(const Matrix3 & m) const
{
	return multiplyMatrices(m, *this);
}

void THREE::Matrix3::multiplyScalar(const float & v)
{
	m_e[0] *= v; m_e[1] *= v; m_e[2] *= v;
	m_e[3] *= v; m_e[4] *= v; m_e[5] *= v;
	m_e[6] *= v; m_e[7] *= v; m_e[8] *= v;
}

float THREE::Matrix3::determinant() const
{
	const float &a = m_e[0], &b = m_e[1], &c = m_e[2],
		&d = m_e[3], &e = m_e[4], &f = m_e[5],
		&g = m_e[6], &h = m_e[7], &i = m_e[8];

	return a * e * i - a * f * h - b * d * i + b * f * g + c * d * h - c * e * g;
}

void THREE::Matrix3::transpose()
{
	float tmp;
	tmp = m_e[1]; m_e[1] = m_e[3]; m_e[3] = tmp;
	tmp = m_e[2]; m_e[2] = m_e[6]; m_e[6] = tmp;
	tmp = m_e[5]; m_e[5] = m_e[7]; m_e[7] = tmp;
}

bool THREE::Matrix3::operator==(const Matrix3 & m)
{
	for (int i = 0; i < 9; i++)
		if (m_e[i] != m.m_e[i]) return false;
	return true;
}

THREE::Matrix3 & THREE::Matrix3::operator=(const Matrix3 & m)
{
	copy(m);
	return *this;
}
