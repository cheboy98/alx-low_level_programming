#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array
 * @min: min value
 * @max: max value
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int *p;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; min < max + 1; i++)
	{
		p[i] = min++;
	}

	return (p);
}
