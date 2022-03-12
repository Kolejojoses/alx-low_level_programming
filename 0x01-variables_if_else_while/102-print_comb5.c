#include <stdio.h>
#include <stdlib.h>

/**
 * main - combination of two two digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x, y, w, z;

	for (x = 0; x < 10; x++)
	{
		for (w = 0; w < 10; w++)
		{
			for (y = 0; y < 10; y++)
			{
				for (z = 0; z < 10; z++)
				{
					if ((((x / 10) % 10) + (w % 10)) < (((y / 10) % 10) + (z % 10)))
					{
						putchar(x % 10 + '0');
						putchar(w % 10 + '0');
						putchar(' ');
						putchar(y % 10 + '0');
						putchar(z % 10 + '0');
						if (((x / 10) % 10) + (w % 10) != 98)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
