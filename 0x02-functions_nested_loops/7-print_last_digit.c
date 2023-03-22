#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: compute value
 * Return: always 0
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar('0' + ld);
	return (ld);
}
