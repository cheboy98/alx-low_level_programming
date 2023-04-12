#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free memory
 * @grid: 2D array
 * @height: array height
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
