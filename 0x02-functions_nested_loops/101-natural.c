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

	for (x = 0; x < 1024; x++)
	{
		if ((x  % 5) == 0)
		{
			if ((x % 3) == 0)
			{
				x += x;
				printf("%d\n", x);
			}
		}
	}
	return (0);
}
