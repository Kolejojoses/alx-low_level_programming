#include <string.h>
#include "main.h"
#include <stdio.h>

/**
*_strcat - string concatenation
*@dest: destination
*@src: source
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
