#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: string to print
 * Return: 0
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s);
	_putchar('\n');
}
