#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - pointer to newly allocated space to a new string
 *@str: string
 *Return: ptr
 */

char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = strdup(str);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
