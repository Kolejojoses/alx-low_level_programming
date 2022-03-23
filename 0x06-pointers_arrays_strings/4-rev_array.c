#include "main.h"
#include <stdio.h>

/**
*reverse_array - a function that reverses the content of an array of integers.
*@a: array
*@n: length of array
*Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	for (i = n - 1; i >= 0; i--)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
