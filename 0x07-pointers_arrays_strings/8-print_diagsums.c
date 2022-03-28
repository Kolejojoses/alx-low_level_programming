#include "main.h"
#include <stdio.h>

/**
*print_diagsums - diagonals of square matrix
*@a: square matrix
*@size: size of matrix
*Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum_1 = 0;
	int sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 = sum_1 + a[i][i];
		sum_2 = sum_2 + a[i][size - i];
		printf("%d, %d", sum_1, sum_2);
	}
}
