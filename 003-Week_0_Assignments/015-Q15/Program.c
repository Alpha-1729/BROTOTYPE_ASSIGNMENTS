// Q15
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>

void getArray(int array[], int limit);
void displayArray(int array[], int limit);

void main()
{
    int limit;
    int array[100];
    setbuf(stdout, NULL);
    
    printf("Enter the size of the array: ");
    scanf("%d", &limit);
    
    getArray(array, limit);
    displayArray(array, limit);
}

void getArray(int array[], int limit)
{
    printf("Enter the values of the array: ");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }
}

void displayArray(int array[], int limit)
{
    printf("Array values are: ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", array[i]);
    }
}