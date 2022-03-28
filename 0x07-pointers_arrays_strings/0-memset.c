#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_memset - function that fills memory with a constant byte
*@s: string
*@b: value to be filled
*@n: number of bytes
*Return: memset result
*/

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
