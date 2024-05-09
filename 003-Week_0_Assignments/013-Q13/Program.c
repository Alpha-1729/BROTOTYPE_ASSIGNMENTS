// Q13
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    setbuf(stdout, NULL);
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    int strLength = strlen(str);
    
    for (int i = 0; i <= (strLength / 2); i++)
    {
        if (str[i] != str[strLength - i - 1])
        {
            printf("Entered string is not a palindrome");
            return;
        }
    }
    
    printf("Entered string is a palindrome");
}