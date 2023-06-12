#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize it
 * @size: size of the array
 * @c: initiazed char
 *
 * Return: pointer to the allocated memory
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
