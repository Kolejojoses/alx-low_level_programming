#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *_strlen - length of string
 *@s: string
 *Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i + 1);
}

/**
 *argstostr - concatenates arguments
 *@ac: argument count
 *@av: arguments
 *Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *ptr;

	len = 0;
	k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	ptr = (char *)malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
