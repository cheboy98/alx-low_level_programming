#include "main.h"

/**
 * print_number - print number
 * @n: number to be output
 * Return: void
 */

void print_number(int n)
{
	unsigned int i = n;

	if (i < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
