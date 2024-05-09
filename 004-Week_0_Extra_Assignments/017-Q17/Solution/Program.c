// Q17
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
void swap(int *pointer1, int *pointer2);
void main()
{
    int num1, num2;
    setbuf(stdout, NULL);
    
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    swap(&num1, &num2);
    
    printf("The first number is %d and second number is %d", num1, num2);
}

void swap(int *pointer1, int *pointer2)
{
    int temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
}