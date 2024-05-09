// Alphabet Pattern 2
/*
>>>> Alphabet Pattern 1
ABCDE
ABCD
ABC
AB
A

>>>> Pattern 2
EEEEE
DDDD
CCC
BB
A

>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
void main()
{
    int rows = 5;
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 64 + j);
        }
        printf("\n");
    }

    printf("\n");
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 64 + i);
        }
        printf("\n");
    }
}
