#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array that range from min to max
 * @min: min value
 * @max: max value
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i, size, length;
	int *array;

	if (min > max)
		return (NULL);

	length = max - min;
	size = length + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
