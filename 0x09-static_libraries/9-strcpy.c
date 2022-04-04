#include "main.h"
#include <string.h>

/**
*_strcpy - a function that copies the string pointed to by src,
*including the terminating null byte (\0), to the buffer pointed to by dest.
*@dest: pasting
*@src: copying
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int a, len;

	len = strlen(src);

	for (a = 0; a < len && src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
