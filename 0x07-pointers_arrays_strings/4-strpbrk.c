#include "main.h"
#include <string.h>

/**
*_strpbrk - searches a string
*@s: string
*@accept: substring
*Return: a pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
