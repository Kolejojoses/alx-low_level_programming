#include <stdio.h>
#include <stdlib.h>

/**
 * main - 0-9
 * 
 * Return: 0 (Success)
 */
int main(void)
{
	int numbe;

	for (numbe = 0; numbe <= 9; numbe++)
	{
		putchar(numbe % 10 + '0');
		if (numbe < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
