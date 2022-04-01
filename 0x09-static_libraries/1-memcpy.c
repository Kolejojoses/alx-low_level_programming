#include "main.h"
#include <string.h>

/**
*_memcpy - fuction that copies memory area
*@dest: destination
*@src: source
*@n: n bytes
*Return: copied memory area
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
