// Day 4
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
    int limit = 10, multiplier;
    printf("Enter the multiplier: ");
    scanf("%d", &multiplier);

    for (int i = 1; i <= limit; i++)
    {
        printf("%d x %d = %d\n", i, multiplier, (i * multiplier));
    }
}
