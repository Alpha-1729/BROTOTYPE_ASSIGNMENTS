// Q3
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
    setbuf(stdout, NULL);
    
    printf("Enter the first string: ");
    scanf("%s", stringOne);
    
    printf("Enter the second string: ");
    scanf("%s", stringTwo);
    
    int i = 0;
    while(stringOne[i] != '\0' && stringTwo[i] != '\0')
    {
        if (stringOne[i] != stringTwo[i])
        {
            printf("The given strings are not equal.");
            return;
        }
        i++;
    }
    
    if (stringOne[i] != stringTwo[i])
    {
        printf("The given strings are not equal.");
    }
    else
    {
        printf("The given strings are equal.");
    }
}