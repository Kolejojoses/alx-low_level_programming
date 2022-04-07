#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenate string
 *@s1: string 1
 *@s2: string 2
 *Return: s
 */

char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j, size;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	size = l1 + l2 + 1;
	s = (char *)malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		s[l1 + j] = s2[j];
	}
	s[size - 1] = '\0';
	return (s);
}
