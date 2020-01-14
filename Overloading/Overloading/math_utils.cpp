#include "math_utils.h"

namespace utilz {
	double area(double length, double width)
	{
		return length * width;
	}

	double area(double length)
	{
		return length * length;
	}

	double area(RECTANGLE rect)
	{
		return rect.length * rect.width;
	}

	// default argument, 뭐가 들어오지 않으면 pow는 2로 초기화된다.
	// 이는 overloading을 최소화 해준다.
	double power(double base, int pow)
	{
		double total = 1;
		for (int i = 0; i < pow; i++)
		{
			total *= base;
		}

		return total;
	}
}