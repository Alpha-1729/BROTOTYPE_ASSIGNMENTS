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
    int principalAmount;
    float interestRate, numYears, simpleInterest;
    setbuf(stdout, NULL);

    printf("Enter the principal amount: ");
    scanf("%d", &principalAmount);

    printf("Enter the interest rate: ");
    scanf("%f", &interestRate);

    printf("Enter the number of years: ");
    scanf("%f", &numYears);

    simpleInterest = ((principalAmount * numYears * interestRate) / 100);

    printf("Interest is %f", simpleInterest);
}
