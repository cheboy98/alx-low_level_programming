#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two strings up to n bytes
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concat
 *
 * Return: concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int s1_length, size, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = strlen(s1);
	size = s1_length + n + 1;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		array[i] = s1[i];

	for (i = 0; i < n; i++)
		array[s1_length + i] = s2[i];

	array[size - 1] = '\0';
	return (array);
}
