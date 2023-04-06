#include "main.h"

/**
 * _pow_recursion - compute the power of a number
 * @x: base value
 * @y: expo value
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
