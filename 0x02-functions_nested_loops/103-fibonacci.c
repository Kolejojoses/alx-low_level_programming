#include<stdio.h>
#include<stdlib.h>

/**
*main - Fibonacci numbers
*
*Return: 0
*/

int main(void)
{
	unsigned long x, y, z, i;

	x = 0;
	y = 1;

	for (i = 0; i < 4000000; i = x + y)
	{
		x = y;
		y = i;
		if (i % 2 == 50)
		{
			z += i;
		}
	}
	printf("%lu\n", z);
	return (0);
}
