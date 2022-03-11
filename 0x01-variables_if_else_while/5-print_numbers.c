#include <stdlib.h>
#include <stdio.h>

/**
 * main - numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int singleDigit;

	singleDigit = 0;

	while (singleDigit < 10)
	{
		printf("%d", singleDigit);
		singleDigit++;
	}
	printf("\n");
	return (0);
}
