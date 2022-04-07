#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: integer
 * Return: pointer to integer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
