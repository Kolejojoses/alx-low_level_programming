#include "main.h"

/**
*print_times_table - a function that prints the n times table, starting with 0
*@n: a function that prints the n times table, starting with 0
*Return: n multiplication table
*/

void print_times_table(int n)
{
	int x, y, z;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (n <= 15 && n >= 0)
			{
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (z < 10 && z != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(z % 10 + '0');
				}
				else if (z >= 10 && z < 100)
				{
					_putchar(' ');
					_putchar((z / 10) % 10 + '0');
					_putchar(z % 10 + '0');
				}
				else if (z >= 100 && z < 1000)
				{
					_putchar((z / 100) % 10 + '0');
					_putchar((z / 10) % 10 + '0');
					_putchar(z % 10 + '0');
				}
				else if (z == 0)
				{
					_putchar(z % 10 + '0');
				}
			}
		}
		_putchar('\n');
	}
}
