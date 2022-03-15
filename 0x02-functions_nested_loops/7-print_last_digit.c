#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*print_last_digit - a function that prints the last digit of a number
*@b: notation
i*Return: last digit
*/

int print_last_digit(int b)
{
	int a;

	if (b < 0)
		b = -b;
	a = b % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
