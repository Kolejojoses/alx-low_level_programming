#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *free_grid - free the grid
 *@grid: 2-d array
 *@height: height of the 2-d array
 *Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
