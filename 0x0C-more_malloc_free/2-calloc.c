#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory to an array of nmemb elements
 * @nmemb: number of elements of the array
 * @size: size of each elements
 *
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/*length = size * nmemb;*/

	array = malloc(sizeof(size) * nmemb);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
	{
		array[i] = 0;
	}

	return (array);
}
