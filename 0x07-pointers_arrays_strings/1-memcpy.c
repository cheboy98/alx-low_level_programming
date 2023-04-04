#include "main.h"

/**
 * _memcpy - copy to dest
 * @dest: dest array
 * @src: src array
 *
 * @n: size
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p;
	unsigned int i;

	p = dest;

	for (i = 0; i < n; i++)
	{
		p[i] = src[i];
	}

	return (dest);
}
