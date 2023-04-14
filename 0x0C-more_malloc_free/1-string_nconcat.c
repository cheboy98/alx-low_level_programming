#include "main.h"
#include <stdlib.h>

int str_length(char *s);
/**
 * string_nconcat - concate two string
 * @s1: string
 * @s2: string
 * @n: nber of bytes to concat
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_length;
	unsigned int s2_length;
	unsigned int i;

	s1_length = str_length(s1);
	s2_length = str_length(s2);

	if (n < s2_length)
		str = malloc(sizeof(char) * (s1_length + n + 1));

	else
		str = malloc(sizeof(char) * (s1_length + s2_length + 1));

	if (str == NULL)
		return (NULL);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; i < s1_length; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < s1_length + n; i++)
	{
		str[s1_length + i] = s2[i];
	}

	str[i] = '\0';

	return (str);
}

/**
 * str_length - compute the length of the string
 * @s: string
 *
 * Return: length of string
 */

int str_length(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
