#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[10];
	char type; 
	double angle;

	printf("Enter angle and type (for example: 21.10D or 10.65R): ");
	scanf("%lf%c", &angle, &type);
    printf("Your angle and type is: %lf%c", angle, type);

	if (convert(buf, angle, type)!= "error")
	printf("Converting: %lf%c = %s", &angle, &type, convert(buf, angle, type));
	
	if (convert(buf, angle, type) == "error")
		return "error";
	getch();
	return 0;
}
