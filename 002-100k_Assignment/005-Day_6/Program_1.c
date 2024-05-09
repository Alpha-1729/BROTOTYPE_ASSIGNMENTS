// Day 6
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main()
{
	char str[100];
	int strLength;

	printf("Enter a string: ");
	scanf("%s", str);
	strLength = strlen(str);

	for (int i = 0; i <= (strLength / 2); i++)
	{
		if (str[i] != str[strLength - i - 1])
		{
			printf("Entered string is not a palindrome");
			return;
		}
	}
	printf("Entered string is a palindrome");
}
