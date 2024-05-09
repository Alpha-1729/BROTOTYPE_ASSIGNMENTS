// Q4
/*
>>>> getchar(); is used to avoid the newline after reading an input.
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
#include <stdbool.h>

void stringLength();
void stringConcatenation();
void stringReverse();
bool exitFunction();

void main()
{
    int userInput;
    bool isExited = false;
    setbuf(stdout, NULL);
    
    do
    {
        printf("\n\n\nChoose one option: \n");
        printf("1. STRING LENGTH \n");
        printf("2. STRING CONCATENATION \n");
        printf("3. STRING REVERSE \n");
        printf("4. EXIT \n\n");

        scanf("%d", &userInput);
        getchar();
        
        switch (userInput)
        {
            case 1:
                stringLength();
                break;
            case 2:
                stringConcatenation();
                break;
            case 3:
                stringReverse();
                break;
            case 4:
                isExited = exitFunction();
                break;
            default:
                printf("Invalid input.");
        }
    }
    while (isExited == false);
}

void stringLength()
{
    char inputString[100];
    int index = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", inputString);
    getchar();
    
    while (inputString[index] != '\0')
    {
        index++;
    }
    
    printf("The length of the string is: %d", index);
}

void stringConcatenation()
{
    char stringOne[100], stringTwo[100], result[200];
    int finalIndex, index = 0;
    
    printf("Enter the first string: ");
    scanf("%[^\n]", stringOne);
    getchar();
    
    printf("Enter the second string: ");
    scanf("%[^\n]", stringTwo);
    getchar();
    
    // Copy all character from first string to result.
    while (stringOne[index] != '\0')
    {
        result[index] = stringOne[index];
        index++;
    }
    
    // Copy all character from second string to result.
    finalIndex = index;
    index = 0;
    while (stringTwo[index] != '\0')
    {
        result[finalIndex] = stringTwo[index];
        index++;
        finalIndex++;
    }
    
    result[finalIndex] = '\0';
    
    printf("The concatenated string is: %s", result);
    
}

void stringReverse()
{
    char inputString[100];
    int maxIndex = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", inputString);
    getchar();
    
    // Calculating the length of the input string.
    while (inputString[maxIndex] != '\0')
    {
        maxIndex++;
    }
    
    // To avoid the last character in the string.
    //maxIndex--;
    
    // Reversing the string.
    for (int i = 0; i < (maxIndex / 2); i++)
    {
        int endIndex = maxIndex - i - 1;
        
        char temp = inputString[i];
        inputString[i] = inputString[endIndex];
        inputString[endIndex] = temp;
    }
    
    printf("Reversed string is: %s", inputString);
}

bool exitFunction()
{
    return true;
}