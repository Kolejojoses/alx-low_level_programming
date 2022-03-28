#include "main.h"
#include <string.h>

/**
*_strchr - function that locate a character in a string
*@s: string
*@c: character
*Return: located character
*/

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
