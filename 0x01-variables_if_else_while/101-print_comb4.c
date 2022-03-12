#include <stdio.h>
#include <stdlib.h>

/**
 * main - different combinations of three digit
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int h, t, u;

	for (h = 0; h <= 7; h++)
	{
		for (t = 1; t <= 8; t++)
		{
			for (u = 2; u <= 9; u++)
			{
				if (h < t && t < u)
				{
					putchar(h % 10 + '0');
					putchar(t % 10 + '0');
					putchar(u % 10 + '0');
					if (h != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
