#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse using recursion
 * @s: string to compute
 * Return: 0
 */

int _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
