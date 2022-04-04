#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_alloc_grid - free alloc
 *@ptr: pointer
 *@height: height of grid
 *Return: nothing
 */

void free_alloc_grid(int** ptr, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free (*(ptr + i));
	}
	free (ptr);
}

/**
 *alloc_grid - 2-d array
 *@width: width of array
 *@height: height of array
 *Return: 2-d array
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i;

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
	}
	return (ptr);
	free_alloc_grid (ptr, height);
}
