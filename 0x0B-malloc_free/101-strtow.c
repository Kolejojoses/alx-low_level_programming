#include "main.h"
#include <stdlib.h>

int word_count(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' && s[1 + i] != ' ')
			count++;
	}
	return (count);
}

/**
 *strtow - splits a string
 *@str: string
 *Return: pointer
 */

char **strtow(char *str)
{
	if (str == NULL || str == "")
		return (NULL);
	
	if (ptr == NULL)
		return (NULL);
}
