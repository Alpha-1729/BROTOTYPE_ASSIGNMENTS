// Q12
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
#include <stdbool.h>

void swapArray(int array[], int i, int j);
void main()
{
    int limit;
    int array[100];
    bool isArraySorted;
    setbuf(stdout, NULL);
    
    printf("Enter the size of the array: ");
    scanf("%d", &limit);
    
    printf("Enter the values of the array: ");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }
    
    // Sorting the array.
    for (int i = 0; i < (limit - 1); i++)
    {
        isArraySorted = true;
        
        for (int j = 0; j < (limit - i - 1); j++)
        {
            if (array[j + 1] > array[j])
            {
                swapArray(array, j, j + 1);
                isArraySorted = false;
            }
        }
        
        if (isArraySorted == true)
        {
            break;
        }
    }
    
    // Printing the sorted array.
    printf("Sorted array: ");
    for (int i = 0; i < limit - 1 ; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d", array[limit - 1]);
    
}

void swapArray(int array[], int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
