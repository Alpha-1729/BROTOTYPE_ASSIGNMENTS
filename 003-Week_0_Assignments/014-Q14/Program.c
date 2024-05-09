// Q14
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
    setbuf(stdout, NULL);
    
    printf("Enter the size of the arrays: ");
    scanf("%d", &limit);
    
    printf("Enter the values of array 1 \n");
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            scanf("%d", &arrayOne[i][j]);
        }
    }
    
    printf("Enter the values of the array 2 \n");
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            scanf("%d", &arrayTwo[i][j]);
        }
    }
    
    // Calculating and printing the sum of the arrays.
    printf("Sum of 2 arrays is: \n");
    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            printf("%d ", arrayOne[i][j] + arrayTwo[i][j]);
        }
        printf("\n");
    }
}