#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "task4.h"

int main()
{
	int feet, inches;
	printf("Enter height(feet and inches) (for example: 12'3): ");
	scanf("%d'%d", &feet, &inches);
	printf("Your height in feet and inches is %d'%d:",feet, inches);
	printf("Your height in cantimeters: %.1f cm",convert(feet,inches));
	getch();
	return 0;
}