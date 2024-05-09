// Number Pattern 1
/*
>>>> Pattern 1
1
12
123
1234
12345

>>>> Pattern 2
12345
1234
123
12
1

>>>> Pattern 3
654321
65432
6543
654
65
6

>>>>
>>>>
>>>>
*/

#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 6; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
