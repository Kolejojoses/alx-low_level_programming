#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev -  a function that prints a string, in reverse,
*followed by a new line
*@s: pointer
*Return: reverse string
*/

void print_rev(char *s)
{
	int i, j;

	j = strlen(s);

	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
