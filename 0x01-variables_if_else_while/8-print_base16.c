#include <stdio.h>
#include <stdlib.h>

/**
 * main - base 16
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;
	char alph;

	for (num = 0; num <= 9; num++)
	{
		putchar(num % 10 + '0');
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
