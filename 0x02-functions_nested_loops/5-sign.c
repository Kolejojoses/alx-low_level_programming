#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*print_sign -  a function that prints the sign of a number
*@n: Notation
*Return: 1 otherwise 0 or -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar ('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar (0);
	}
	else
	{
		return (-1);
		_putchar ('-');
	}
}
