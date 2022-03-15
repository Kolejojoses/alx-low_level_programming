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
			c = a * b
			printf("%d", c);
			if (a != 9)
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
