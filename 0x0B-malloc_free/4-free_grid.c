#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D array
 * @grid: 2D array, to be freed
 * @height: number of rows
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
