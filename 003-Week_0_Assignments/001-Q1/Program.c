// Q1
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

    printf("Entered character is %c", ch);
}
