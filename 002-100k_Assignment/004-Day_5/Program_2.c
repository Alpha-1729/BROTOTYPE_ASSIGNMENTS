// Day 5
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
	int array[10];
	int limit, evenNumCount = 0;

	printf("Enter the size of the array: ");
	scanf("%d", &limit);

	printf("Enter the values of the array: ");
	for (int i = 0; i < limit; i++)
	{
		scanf("%d", &array[i]);

		if (array[i] % 2 == 0)
		{
			evenNumCount++;
		}
	}

	printf("Number of even numbers in the given array is %d", evenNumCount);
}
