// Day 3
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
void main()
{
	float markPercentage;
	printf("Enter your mark percentage: ");
	scanf("%f", &markPercentage);
	
	if (markPercentage >= 90) {
		printf("A");
	}
	else if (markPercentage >= 80) {
		printf("B");
	}
	else if (markPercentage >= 70) {
		printf("C");
	}
	else if (markPercentage >= 60) {
		printf("D");
	}
	else if (markPercentage >= 50) {
		printf("E");
	}
	else {
		printf("Failed");
	}
}
