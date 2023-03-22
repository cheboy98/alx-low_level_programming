#include "main.h"

/**
 * print_sign - check for the sign of the int
 * @n: value of the int
 * Return: 1 if n > 0, 0 if n == 0 and -1 if n <= 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
