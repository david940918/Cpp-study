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

	// default argument, ���� ������ ������ pow�� 2�� �ʱ�ȭ�ȴ�.
	// �̴� overloading�� �ּ�ȭ ���ش�.
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