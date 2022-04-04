#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - 2-d array
 *@width: width of array
 *@height: height of array
 *Return: 2-d array
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = (int *)malloc(width * sizeof(int));
		if (*(ptr + i) == NULL)
		{
			free(ptr);
			for (j = 0; j <= i; j++)
			{
				free(*(ptr + j));
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
