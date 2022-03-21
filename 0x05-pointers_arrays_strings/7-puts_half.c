#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*puts_half - function that prints second half of a string
*@str: pointer
*Return: half string
*/

void puts_half(char *str)
{
	int len, i;

	len = strlen(str);

	if (len % 2 == 0)
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	else
		for (i = (len + 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
