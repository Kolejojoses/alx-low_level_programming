#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints numbers from 0 to 9
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
	{
		putchar(s % 10 + '0');
	}
	putchar('\n');
	return (0);
}
