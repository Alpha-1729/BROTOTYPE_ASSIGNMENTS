// Number Pattern 3
/*
>>>> Pattern
1
23
456
78910
1112131415

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
    int number = 1;
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", number);
            number++;
        }
        printf("\n");
    }
}
