// Q7
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
    int multiplicand, limit = 10;
    setbuf(stdout, NULL);

    printf("Enter the multiplicand: ");
    scanf("%d", &multiplicand);

    for (int i = 1; i <= limit; i++)
    {
        printf("%d x %d = %d\n", i, multiplicand, (i * multiplicand));
    }
}
