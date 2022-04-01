#include <stdio.h>
#include "main.h"

/**
*_strlen - a function that returns the length of a string
*@s: pointer
*Return: length of string
*/

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
