#include "task3.h"

char* convert(char buf[], double angle, char type)
{
	double newangle;
	char newtype;
	if (type == 'D')
	{
		newangle = angle * (0.0174533);
		newtype = 'R';
	}
	else if (type == 'R')
	{
	   newangle =angle * (57.2958);
		newtype = 'R';
	}
	else
		return "error";

	sprintf (buf, "%lf%c", newangle, newtype);
	return buf;
}
