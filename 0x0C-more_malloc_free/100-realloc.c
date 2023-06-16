#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory bloc to a new size
 * @ptr: pointer to the old memory bloc
 * @old_size: size of ptr
 * @new_size: size of the new memory bloc
 *
 * Return: pointer to the new memory bloc
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *temp_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	temp_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = temp_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = temp_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}

