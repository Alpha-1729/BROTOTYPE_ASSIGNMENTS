// Q13
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>

int getMaxValue(int array[], int limit);

void main()
{
    int limit;
    int array[100];
    int maxValue = 0;
    setbuf(stdout, NULL);
	
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Enter the values of the arrays: ");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    maxValue = getMaxValue(array, limit);
    printf("Max value in the array is: %d", maxValue);
    
}

int getMaxValue(int array[], int limit)
{
    int maxValue = array[0];

    for (int i = 1; i < limit; i++)
    {
        if (array[i] > maxValue)
	{
	    maxValue = array[i];
	}
    }

    return maxValue;
}

