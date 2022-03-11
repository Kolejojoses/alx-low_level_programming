#include <stdio.h>
#include <stdlib.h>

/**
 * main - combination
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int tens, unit;

	for (tens = 0; tens <= 8; tens++)
	{
		for (unit = 1; unit <= 9; unit++)
		{
			if (tens < unit)
			{
				putchar(tens % 10 + '0');
				putchar(unit % 10 + '0');
				if (tens != 8 || unit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
