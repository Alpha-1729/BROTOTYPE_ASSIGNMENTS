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
#include <stdlib.h>
#include <stdbool.h>

void swapElements(int array[], int i, int j);

void main()
{
    int limit;
    int array[100];
    bool isSwapped = true;

    printf("Enter the size of the array: ");
    scanf("%d", &limit);

    printf("Enter the values of the array: ");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    // Sorting the array.
    for (int i = 0; i < limit - 1; i++)
    {
        isSwapped = false;
        for (int j = 0; j < limit - i - 1; j++)
        {
            if (array[j + 1] > array[j])
            {
                isSwapped = true;
                swapElements(array, j, j + 1);
            }
        }
        if (isSwapped == false)
        {
            break;
        }
    }

    // Printing the final array.
    printf("Sorted array: ");
    for (int i = 0; i < limit - 1; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d", array[limit - 1]);
}

void swapElements(int array[], int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
