#include <stdio.h>

/**
 * main - lowercase alphabet
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet;
	for (alphabet = "a"; alphabet <= "z"; alphabet++)
		putchar("%c ", alphabet);
	return (0);
}
