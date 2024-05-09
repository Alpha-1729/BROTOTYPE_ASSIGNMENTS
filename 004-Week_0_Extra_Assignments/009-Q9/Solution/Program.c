// Q9
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
    setbuf(stdout, NULL);
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    printf("The ASCII value of the character %c is %d", ch, ch);
}