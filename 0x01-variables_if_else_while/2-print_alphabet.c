#include <stdio.h>

/**
 * main - lowercase alphabet
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet;
	alphabet ="a";
	while (alphabet<="z")
		putchar("%c ", alphabet);
		alphabet ++;
	return (0);
}
