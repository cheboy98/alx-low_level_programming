#include "main.h"

/**
 * _memset - print buffer
 * @s: address of memory to print
 * @b: data to print
 * @n: iumber of bytes to print
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p;
	unsigned int i;

	p = s;

	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}

	return (s);
}
