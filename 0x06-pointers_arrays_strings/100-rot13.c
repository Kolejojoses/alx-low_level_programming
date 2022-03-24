#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*rot13 - a function that encodes a string into 1337.
*@s: string
*Return: s
*/

char *rot13(char *s)
{
	int i, j;

	char a[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
