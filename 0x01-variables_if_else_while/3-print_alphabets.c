#include <stdio.h>
#include <stdlib.h>

/**
 * main - lowercase and uppercase alphabet
 *
 * Function: - 0 (Success)
 */
int main(void)
{
	char lowerCase, upperCase;

	lowerCase = 'a';
	upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar (lowerCase);
		lowerCase++;
	}
	while (upperCase <= 'Z')
	{
		putchar (upperCase);
		upperCase++;
	}
	putchar ('\n');
	return (0);
}
