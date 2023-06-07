#include "main.h"

/**
 * factorial - compute the factorial of a number
 * @n: number to be compute
 * Return: answer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
