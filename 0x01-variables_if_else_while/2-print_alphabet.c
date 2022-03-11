#include <stdio.h>
#include <stdlib.h>

/**
 * main - lowercase alphabet
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lowerCase;
	lowerCase='a';
	while(lowerCase<='z')
	{
		putchar(lowerCase\n);
		lowerCase++;
	}
	return (0);
}
