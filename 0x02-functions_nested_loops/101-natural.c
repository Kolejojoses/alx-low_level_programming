#include<stdio.h>
#include<stdlib.h>

/**
*main - Nature made the natural numbers
*
*Return: 0
*/

int main(void)
{
	int x; 
	unsigned long int y, z, i;

	y = 0;
	z = 0;
	i = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 5) == 0)
		{
			y = y + x;
		}
		if ((x % 3) == 0)
		{
			z = z + x;
		}
	}
	i = y + z;
	printf("%ld\n", i);
	return (0);
}
