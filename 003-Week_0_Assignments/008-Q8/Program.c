// Q8
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
    setbuf(stdout, NULL);

    printf("Enter a limit: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i = i + 2)
    {
        sum += i;
    }

    printf("Sum of odd numbers is %d", sum);
}