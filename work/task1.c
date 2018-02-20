#include "task1.h"


int getRecommendation(char gender, float height, float weight)
{
	
	if (gender = 'm')
	{
		if ((height - weight) > 100) 
			return 1;
		else if ((height - weight) == 100)
			return 0;
		else
			return -1;
	}
		
	if (gender = 'w') 
	{
		if ((height - weight) > 110)
			return 1;
		else if ((height - weight) == 110)
			return 0;
		else
			return -1;
	}
}