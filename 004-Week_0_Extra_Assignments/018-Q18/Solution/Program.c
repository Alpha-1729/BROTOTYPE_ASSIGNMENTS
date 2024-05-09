// Q18
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
    int index = 0;
    char inputString[100];
    char ch;
    setbuf(stdout, NULL);
    
    printf("Enter the word: ");
    scanf("%s", inputString);
    
    while (inputString[index] != '\0')
    {
        ch = inputString[index];
        
        // Check whether the character is a lowercase or not.
        if ((ch <= 'z') && (ch >= 'a'))
        {
            inputString[index] = 'A' + ch - 'a';
        }
        
        index++;
    }
    
    printf("The converted string is: %s", inputString);
    
}