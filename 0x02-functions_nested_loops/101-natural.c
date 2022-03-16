#include<stdio.h>
#include<stdlib.h>

/**
*main - Nature made the natural numbers
*
*Return: 0
*/

int main(void)
{
	int x, i;

	i = 0;

	for (x = 1; x < 1024; x++)
	{
		if ((x % 5 == 0) || (x % 3 == 0))
		{
			i += x;
		}
	}
	printf("%d\n", i);
	return (0);
}
