#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a 2D array of integers
 * @width: Number of colums
 * @height: Number of rows
 *
 * Return: Pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;
	int size = width + height;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
