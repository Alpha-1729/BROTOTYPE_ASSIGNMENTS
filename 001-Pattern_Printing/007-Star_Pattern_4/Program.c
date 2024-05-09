// Star Pattern 4
/*
>>>> Star Pattern
    *
   * *
  * * *
 * * * *
* * * * *

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
        for (int j = i; j < rows; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (i * 2) - 1; k++)
        {
            if (k % 2 == 0)
            {
                printf(" ");
                continue;
            }
            printf("*");
        }
        printf("\n");
    }
}
