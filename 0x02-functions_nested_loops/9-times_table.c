#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*times_table - nine times table
*
*Return: 0
*/

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (b == 0)
			{
				_putchar (a + '0');
			}
			else if (c < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			}
			else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
