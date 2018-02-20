#include "task4.h"

float convert(int feet, int inches)
{
	float res_conv = 0.0;
	res_conv = (feet*12.0*2.54) + inches*2.54;
	return res_conv;
}