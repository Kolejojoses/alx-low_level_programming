#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *argstostr - concatenates arguments
 *@ac: argument count
 *@av: arguments
 *Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	int len, i, j, k;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	ptr = (char *)malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	k = 0;

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
	return (ptr);
}
