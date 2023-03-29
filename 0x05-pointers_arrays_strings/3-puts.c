#include "main.h"

/**
 * _puts - print to std output
 * @str: string
 * Return: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar("\n");
}
