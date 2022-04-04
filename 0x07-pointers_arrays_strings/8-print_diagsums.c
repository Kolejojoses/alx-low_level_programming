#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*print_diagsums - diagonals of square matrix
*@a: square matrix
*@size: size of matrix
*Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, j;
	int b[size][size] = *a;
	int sum_1 = 0;
	int sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum_1 = sum_1 + b[i][j];
			if ((i + j) == (size - 1))
				sum_2 = sum_2 + b[i][j];
		}
	}
	printf("%d, %d\n", sum_1, sum_2);
}
