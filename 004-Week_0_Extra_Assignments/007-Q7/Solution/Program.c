// Q7
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
    char matchWord[] = "is";
    char inputString[100];
    int index = 0, matchIndex = 0;
    setbuf(stdout, NULL);
    
    printf("Type 'India is my country' in the console: ");
    scanf("%[^\n]s", inputString);
    
    while (inputString[index] != '\0')
    {
        if (matchWord[matchIndex] == '\0')
        {
            printf("Match found at index: %d", (index - matchIndex + 1));
            return;
        }
        else if (inputString[index] == matchWord[matchIndex])
        {
            matchIndex++;
        }
        else
        {
            matchIndex = 0;
        }
        
        index++;
    }
    
    printf("No match found");
}