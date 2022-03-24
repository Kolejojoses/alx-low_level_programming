#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *print_number -  a function that prints a number
  *@n: pointer
  *Return: nothing
  */

void print_number(int n)
{
	unsigned int np;

	if (n < 0)
	{
		_putchar('-');
		np = -n;
	}
	else
	{
		np = n;
	}
	if (np / 10)
	{
		print_number(np / 10);
	}
	_putchar(np % 10 + '0');
}
