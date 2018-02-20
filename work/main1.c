#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"


char gender;
float height;
float weight;

int main()
{
	printf("Enter you height : ");
	scanf("%f", &height);

	printf("Enter you weight : ");
	scanf("%f", &weight);

	printf("Enter you gender: ");
	scanf("%char*", &gender);

	if (getRecommendation(gender, height, weight) == 1) 
		printf("You need to gain weight \n");
	else if(getRecommendation(gender, height, weight) == -1)
		printf("You need to lose weight \n");
	else 
		printf("You weight is perfect \n");
	
	getch();

	return 0;

}
