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
    int limit, sum = 0;
    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("Sum of odd numbers is %d", sum);
}
