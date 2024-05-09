// Q11
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
    int limit, evenNumberCount = 0;
    int array[100];
    setbuf(stdout, NULL);
     
    printf("Enter the size of the array: ");
    scanf("%d", &limit);
    
    printf("Enter the values of the array: ");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
        
        if (array[i] % 2 == 0)
        {
            evenNumberCount++;
        }
    }
    
    printf("Number of even numbers in the given array is %d", evenNumberCount);
}