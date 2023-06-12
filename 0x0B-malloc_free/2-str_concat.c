#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings using malloc to allocate the memory
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the resulting string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int s1_length, s2_length, size;
	char *array;

	s1_length = strlen(s1);
	s2_length = strlen(s2);
	size = s1_length + s2_length + 1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		array[i] = s1[i];

	for (i = 0; i < s2_length; i++)
		array[s1_length + i] = s2[i];

	array[size - 1] = '\0';

	return (array);
}

