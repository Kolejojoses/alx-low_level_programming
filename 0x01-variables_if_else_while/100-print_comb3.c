#include <stdio.h>
#include <stdlib.h>

/**
 * main - combination
 *
 * Return - 0 (Success)
 */
int main(void)
{
	int tens, unit;

	for (unit = 0; unit <= 9; unit++)
	{
		for (tens = 0; tens <= 9; tens++)
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
