#include "function_pointers.h"

/**
 * array_iterator - iterate through each element of the array
 * @array: array of int
 * @size: size of array
 * @action: function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
