#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat strings
 * @s1: string
 * @s2: string
 *
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++, j++;
	}

	return (s);
}
