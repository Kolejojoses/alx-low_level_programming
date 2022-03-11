#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 *
 * Function: 0 (Success)
 */
int main(void)
{
	int singleDigit;

	singleDigit = 0;

	while (singleDigit < 10)
	{
		putchar(singleDigit);
		singleDigit++;
	}
	putchar('\n');
	return (0);
}
