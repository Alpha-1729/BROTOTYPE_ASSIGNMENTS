// Q10
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
    int arrayOne[100], arrayTwo[100];
    setbuf(stdout, NULL);
    
    printf("Enter the size of the arrays: ");
    scanf("%d", &limit);
    
    printf("Enter the values of the Array 1: ");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &arrayOne[i]);
    }
    
    printf("Enter the values of the Array 2: ");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &arrayTwo[i]);
    }
    
    // Swapping the arrays.
    for (int i = 0; i < limit; i++)
    {
        int temp = arrayOne[i];
        arrayOne[i] = arrayTwo[i];
        arrayTwo[i] = temp;
    }
    
    printf("Arrays after swapping: \n");
    
    printf("Array1: ");
    for (int i = 0; i < limit - 1; i++)
    {
        printf("%d, ", arrayOne[i]);
    }
    printf("%d\n", arrayOne[limit - 1]);
    
    printf("Array2: ");
    for (int i = 0; i < limit - 1; i++)
    {
        printf("%d, ", arrayTwo[i]);
    }
    printf("%d", arrayTwo[limit - 1]);
}
