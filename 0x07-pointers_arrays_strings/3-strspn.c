#include "main.h"

/**
 * _strspn - print the length of
 * @s: str to be scanned
 * @accept: str containing the char to match
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
