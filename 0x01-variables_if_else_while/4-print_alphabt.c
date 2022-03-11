#include <stdio.h>
#include <stdlib.h>

/**
 * main - lowercase apart from eq
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lowerCase;

	lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		if (lowerCase != 'e' && lowerCase != 'q')
		{
			putchar (lowerCase);
		}
		lowerCase++;
	}
	putchar ('\n');
	return (0);
}
