#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*leet - a function that encodes a string into 1337.
*@s: string
*Return: s
*/

char *leet(char *s)
{
	int i, j;

	char old[10] = "aAeEoOtTlL";

	char new[10] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == old[j])
			{
				s[i] = new[j];
			}
		}
	}
	return (s);
}
