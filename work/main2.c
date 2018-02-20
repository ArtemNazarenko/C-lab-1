#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"

int main()
{
	int hour, min;

	printf("please, enter hour: ");         
	scanf("%d", &hour);
	printf("please, enter min: ");
	scanf("%d", &min);
	printf("NowTime: %d:%d\n", hour, min);
	
	if (greet(hour, min) == "Good morning!")
	     printf("Good morning! \n");
	
	else if (greet(hour, min) == "Good night!")
		 printf("Good night! \n");
	
	else if (greet(hour, min) == "Good day!")
		 printf("Good day! \n");

	else if (greet(hour, min) == "Good afternoon!")
		 printf("Good afternoon! \n");
	
	else 
		 printf("Uncorrect time! \n");

	getch();
    return 0;
}