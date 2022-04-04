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
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int i;
	int size = l1 + l2 + 1;
	char *s = (char *)malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < l2; i++)
	{
		s[l1 + i] = s2[i];
	}
	s[size - 1] = '\0';
	return (s);
}
