#include "main.h"

/**
*print_times_table - a function that prints the n times table, starting with 0
*@n: a function that prints the n times table, starting with 0
*Return: n multiplication table
*/

void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (z < 10 && y != 0)
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
					else if (z >= 100)
					{
						_putchar((z / 100) % 10 + '0');
						_putchar((z / 10) % 10 + '0');
						_putchar(z % 10 + '0');
					}
				}
				else if (y == 0)
				{
					_putchar(z % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
