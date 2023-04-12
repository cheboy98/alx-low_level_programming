#include "main.h"
#include <stdlib.h>

/**
 * _strdup - dynamically allocate memory
 * @str: value to store
 *
 * Return: str
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(*str));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(s); i++)
	{
		s[i] = str[i];
	}

	return (s);
}
