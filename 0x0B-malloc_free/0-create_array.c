#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates an array of char
 *@size: size of array
 *@c: array
 *Return: nothing
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	*(ptr + i) = 0;
	return (ptr);
}
