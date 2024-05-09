// Q15
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
    int rows = 10;
    int charCount = rows * 2;
    setbuf(stdout, NULL);
    
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= charCount; j++)
        {
            if ((j <= i) || ((charCount - j) < i))
            {
                printf("*");
                continue;
            }
            printf(" ");
        }
        printf("\n");
    }
    
    
}