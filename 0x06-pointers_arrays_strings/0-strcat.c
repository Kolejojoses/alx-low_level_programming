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
	int j = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[j + i] = src[i];
	return dest;
}
