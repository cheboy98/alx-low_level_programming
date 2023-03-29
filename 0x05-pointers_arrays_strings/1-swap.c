#include "main.h"

/**
 * swap_int - swap integers
 * @a: input value 1
 * @b: input value 2
 *
 * Return: a and b
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
