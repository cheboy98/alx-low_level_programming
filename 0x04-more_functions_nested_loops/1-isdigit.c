#include "main.h"

/**
 * _isdigit - compute digit
 * @c: variable to be compute
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
