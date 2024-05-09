// Day 6
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
    int limit;
    int arrayOne[10][10], arrayTwo[10][10];

    printf("Enter the size of arrays: ");
    scanf("%d", &limit);

    printf("Enter te values of the array 1: ");
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            scanf("%d", &arrayOne[i][j]);
        }
    }

    printf("Enter te values of the array 2: ");
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            scanf("%d", &arrayTwo[i][j]);
        }
    }

    printf("Sum of 2 arrays is: ");
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            printf("%d ", arrayOne[i][j] + arrayTwo[i][j]);
        }
        printf("\n");
    }
}
