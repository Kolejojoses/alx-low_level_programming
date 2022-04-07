#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, size1, size2;

	size1 = strlen(s1);
	size2 = strlen(s2);

	ptr = (char *)malloc((size1 + n) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (n >= size2 - 1)
		n = size2 - 1;
	if (size1 == 1 && size2 == 1)
		return (NULL);
	for (i = 0 ; i < size1 - 1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
