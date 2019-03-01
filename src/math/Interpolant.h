#pragma once

namespace THREE
{
	class Interpolant
	{
	public:
		Interpolant();

	public:
		void evaluate(const int& t);

		virtual void copySampleValue(const int& index) = 0;
		virtual void interpolate(const int& i1, const int& t0, const int& t, const int& t1) = 0;
		virtual void intervalChanged(const int& i1, const int& t0, const int& t1) = 0;

	private:
	};
}