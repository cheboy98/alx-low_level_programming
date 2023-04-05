#include "main.h"

/**
 * _strstr - compute the substring
 * @haystack: string to be compute
 * @needle: reference string
 *
 * Return: subdtring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != haystack[i]; j++)
		{
			if (needle[j] == haystack[i])
			{
				return (needle);
			}
		}
	}
	return (needle);
}
