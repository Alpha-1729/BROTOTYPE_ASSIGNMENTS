// Day 2
/*
>>>> Write a program to find the simple interest.
        Accept these values from the user.
            Principal Amount(P) INTEGER
            Interest Rate (R) FLOAT
            Number of years (n) FLOAT
        Output should be FLOAT.

>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
void main()
{
    int principalAmount;
    float interestRate, numYears;

    printf("Enter the principal amount: ");
    scanf("%d", &principalAmount);

    printf("Enter the interest rate: ");
    scanf("%f", &interestRate);

    printf("Enter the number of years: ");
    scanf("%f", &numYears);

    float simpleInterest = ((principalAmount * interestRate * numYears) / 100);
    printf("Simple interest rate is: %f", simpleInterest);
}
