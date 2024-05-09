// Alphabet Pattern 3
/*
>>>> Alphabet Pattern
A
BB
CCC
DDDD
EEEEE

>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
void main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 64 + i);
        }
        printf("\n");
    }
}
