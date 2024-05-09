// Q4
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
    float mark;
    setbuf(stdout, NULL);

    printf("Enter the mark: ");
    scanf("%f", &mark);

    if (mark >= 50)
    {
        printf("Passed");
    }
    else
    {
        printf("Failed");
    }
}
