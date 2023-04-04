#include "main.h"

/**
 * _strchr - locate char in a str
 * @s: str to be compute
 * @c: char to check
 *
 * Return: the rest of the str
 */

char *_strchr(char *s, char c)
{
	char *p;

	p = s;

	while (*s)
	{
		if (*s == c)
		{
			p = s;
			break;
		}
		s++;
	}
	return (p);
}
