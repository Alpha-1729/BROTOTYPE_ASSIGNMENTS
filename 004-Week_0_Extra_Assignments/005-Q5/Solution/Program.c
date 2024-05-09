// Q5
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
    char stringOne[100], stringTwo[100];
    int index = 0;
    setbuf(stdout, NULL);
    
    printf("Enter a string: ");
    scanf("%[^\n]s", stringOne);
    
    // Copy each character from one string to another.
    while (stringOne[index] != '\0')
    {
        stringTwo[index] = stringOne[index];
        index++;
    }
    
    stringTwo[index] = '\0';
    
    printf("Copied string is: %s", stringTwo);
}