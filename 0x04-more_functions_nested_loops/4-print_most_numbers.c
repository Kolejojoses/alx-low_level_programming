#include "main.h"

/*
* print_most_numbers - print the numbers 0 - 9
*
* Return: 0 - 9
*/

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a % 10 + '0');
		}
	}
	_putchar('\n');
}
