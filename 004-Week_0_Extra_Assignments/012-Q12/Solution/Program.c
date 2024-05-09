// Q12
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
    char ch;
    char inputString[100];
    int index = 0, alphabetCount = 0, digitCount = 0, specialCharacterCount = 0;
    setbuf(stdout, NULL);
    
    printf("Enter the text: ");
    scanf("%[^\n]s", inputString);
    
    // Calculate the count of each type of characters.
    while (inputString[index] != '\0')
    {
        ch = inputString[index];
        
        if ((ch >= 'a') && (ch <= 'z'))
        {
            alphabetCount++;
        }
        else if ((ch >= 'A') && (ch <= 'Z'))
        {
            alphabetCount++;
        }
        else if ((ch >= '0') && (ch <= '9'))
        {
            digitCount++;
        }
        else
        {
            specialCharacterCount++;
        }
        
        index++;
    }
    
    printf("Number of Alphabets in the string is %d \n", alphabetCount);
    printf("Number of Digits in the string is %d \n", digitCount);
    printf("Number of Special character in the string is %d \n", specialCharacterCount);
    
}