#include "main.h"

/**
 * _sqrt_recursion - compute the square root of a number
 * @n: integer to compute
 * Return: answer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper_sqrt_recursion(n, 2));
}

/**
 * helper_sqrt_recursion - determine the square root by recursion
 * @n: compute number
 * @sqrt: square root
 * Return: the square root
 */

int helper_sqrt_recursion(int n, int sqrt)
{
	if (sqrt * sqrt > n)
		return (-1);
	else if (sqrt * sqrt == n)
		return (sqrt);
	else
		return (helper_sqrt_recursion(n, sqrt + 1));
}
