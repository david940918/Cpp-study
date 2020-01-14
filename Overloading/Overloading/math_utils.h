#ifndef _MATH_UTILS_H
#define _MATH_UTILS_H

namespace utilz 
{
	typedef struct _RECTANGLE
	{
		double length;
		double width;
	}RECTANGLE;

	double area(double length, double width);

	double area(double length);

	double area(RECTANGLE rect);

	double power(double base, int pow = 2);
}

#endif