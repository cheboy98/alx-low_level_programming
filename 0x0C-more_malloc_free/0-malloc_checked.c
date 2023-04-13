#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 * @b: size of memory
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}

	return (s);
}
