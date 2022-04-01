#include "main.h"
#include <string.h>

/**
*_strspn - function for length of prefix
*@s: string
*@accept: prefix
*Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
