// Q10
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
    int rows = 4;
    setbuf(stdout, NULL);
    
    for (int i = 1; i <= rows; i++) {
    
        // Print spaces
        for (int j = i; j < rows; j++)
        {
            printf(" ");
        }
        
        // Print characters in ascending order.
        for (int j = 1; j <= i; j++)
        {
            printf("%c", "A" + j - 1);
        }
        
        // Print characters in descending order.
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%c", "A" + j - 1);
        }
        
        printf("\n");
    }
}