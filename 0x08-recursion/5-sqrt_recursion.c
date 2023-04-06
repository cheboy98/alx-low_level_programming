#include "main.h"

int _helper_sqrt_recursion(int n, int e);
/**
 * _sqrt_recursion - compute the square root
 * @n: value
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_helper_sqrt_recursion(n, 1));
	}
}

/**
 * _helper_sqrt_recursion - helper funtion to _sqrt_recursion
 * @n: value to be compute
 * @e: estimation value
 *
 * Return: n
 */

int _helper_sqrt_recursion(int n, int e)
{
	if (e * e > n)
	{
		return (-1);
	}
	else if (e * e == n)
	{
		return (e);
	}
	else
	{
		return (_helper_sqrt_recursion(n, e + 1));
	}
}
