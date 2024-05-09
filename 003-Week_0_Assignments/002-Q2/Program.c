// Q2
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
    int num1;
    float num2, sum = 0;
    setbuf(stdout, NULL);

    printf("Enter two numbers: ");
    scanf("%d%f", &num1, &num2);

    sum = num1 + num2;
    printf("Sum is %f", sum);
}
