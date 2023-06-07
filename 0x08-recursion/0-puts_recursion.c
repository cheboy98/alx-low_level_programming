#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: string to print
 * Return: 0
 */

void _puts_recursion(char *s)
{
	//if (*s == "")
		//return;
	else if (*s == '\0')
		return;
	_putchar(*s++);
	_puts_recursion(s);
	_putchar('\n');
}
