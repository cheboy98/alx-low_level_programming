#include "main.h"

/**
 * _isupper - computer uppercase characters
 * @c: checked value
 * Return: 1 is upper or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
