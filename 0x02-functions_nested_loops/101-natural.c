#include<stdio.h>
#include<stdlib.h>

/**
*main - Nature made the natural numbers
*
*Return: 0
*/

int main(void)
{
	int x, y, z, i;

	for (x = 0; x < 1024; x++)
	{
		if ((x  % 5) == 0)
		{
			y = y + x;
		}
		if ((x % 3) == 0)
		{
			z = z + x;
		}
	}
	i = y + z;
	printf("%d\n", i);
	return (0);
}
