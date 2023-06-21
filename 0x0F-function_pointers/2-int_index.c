#include "function_pointers.h"

/**
 * int_index - search an integer form an array and print it's index
 * @array: array to search from
 * @size: size of array
 * @cmp: pointer to the comparison function
 *
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
