#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Copy a string to a new memory location allocated by malloc
 * @str: String to be copied
 *
 * Return: Pointer to the new string
 */

char *_strdup(char *str)
{
	int i, length;
	char *array;

	if (str == NULL)
		return (NULL);

	length = strlen(str);

	array = malloc(sizeof(char) * length + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		array[i] = str[i];

	return (array);
}
