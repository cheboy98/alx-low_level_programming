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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	int s1_length = strlen(s1);
	int size = s1_length + n + 1;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	array = strncat(s1, s2, n);

	return (array);
}
