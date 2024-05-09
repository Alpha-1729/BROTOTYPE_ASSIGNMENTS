// Alphabet Pattern 1
/*
>>>> Alphabet Pattern
A
AB
ABC
ABCD
ABCDE

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
            printf("%c", 64 + j);
        }
        printf("\n");
    }
}
