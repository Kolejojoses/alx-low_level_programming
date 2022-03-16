#include<stdio.h>
#include<stdlib.h>

/**
*main - Fibonacci numbers
*
*Return: 0
*/

int main(void)
{
	int i;
	unsigned long x, y, z;

	x = 0;
	y = 1;

	for (i = 1; i <= 50; i++)
	{
		z = x + y;
		x = y;
		y = z;
		if (i < 50)
		{
			printf("%ld ", z);
		}
		else if (i == 50)
		{
			printf("%ld\n", z);
		}
	}
	return (0);
}
