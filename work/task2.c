#include "task2.h"

char* greet(int hour, int min)
{
	if (hour>=0 && hour<6 && min >= 0 && min <60)
	     return "Good night!";
    else if (hour>=6 && hour<10 && min >= 0 && min<60)
		 return "Good morning!";
    else if (hour>= 10 && hour<18 && min>=0 && min<60)
		 return "Good day!";
    else if (hour>= 18 && hour < 24 && min>=0 && min<60)
		 return "Good afternoon!";
    else  
		 return "Uncorrect time!";
}