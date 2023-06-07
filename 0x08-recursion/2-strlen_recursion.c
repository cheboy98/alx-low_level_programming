#include "main.h"

/**
 * _strlen_recursion - compute the length of a string using recursion
 * @s: string to be compute
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
		length += _strlen_recursion(s + 1);
	return (length);
}
