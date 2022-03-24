#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
*cap_string - changes to uppercase
*@s: string
*Return: s
*/

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
