// Q14
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
int getNthFibonacciNumber(int n, int previous, int next);
void main()
{
    int n, result, previous = 0, next = 1;
    setbuf(stdout, NULL);
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n <= 2)
    {
        result = n - 1;
    }
    else
    {
        result = getNthFibonacciNumber(n, previous, next);
    }
    printf("The final fibonacci number is %d", result);
}

int getNthFibonacciNumber(int n, int previous, int next)
{
    if ( n < 2)
    {
        return next;
    }
    
    int temp = next;
    next = previous + next;
    previous = temp;
    
    return getNthFibonacciNumber(n - 1, previous, next);
}