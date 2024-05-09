// Star Pattern 8
/*
>>>> Star Pattern
*
**
***
****
*****
****
***
**
*

>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
void main()
{
    int rows = 10;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    rows--;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j <= rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
