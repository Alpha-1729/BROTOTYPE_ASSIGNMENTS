// Star Pattern 6
/*
>>>> Star Pattern

*********
 *******
  *****
   ***
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
    int rows = 5;
    for (int i = rows; i >= 1; i--)
    {
        for (int j = rows; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= ((i * 2) - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
