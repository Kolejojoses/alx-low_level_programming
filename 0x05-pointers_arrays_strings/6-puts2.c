#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*puts2 - function that prints every other character of a string,
*starting with the first character, followed by a new line.
*@str: pointer
*Return: every other string
*/

void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
