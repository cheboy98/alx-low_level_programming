#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory with malloc
 * @b: size
 *
 * Return: address
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
