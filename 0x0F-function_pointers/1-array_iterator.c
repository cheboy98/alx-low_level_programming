#include "function_pointers.h"

/**
 * array_iterator - Execute a function passed as argument
 * @array: array of ints
 * @size: size of the array
 * @action: function pointer
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0 || array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
