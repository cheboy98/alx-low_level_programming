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
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < sizeof(s); j++)
	{
		s[j] = str[j];
	}

	return (s);
}
