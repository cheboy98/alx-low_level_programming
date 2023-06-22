#include "variadic_function.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print the args of the variadic funstion
 * @separator: string to print between the args
 * @n: number of args
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list args;

	va_start(args, n);

	for (i = 0, i < n; i++)
	{
		number = va_arg(args, int);
		if (separator == NULL)
			printf("%d", number);
		else
			printf("%d %s", number, separator);
	}
	printf("\n");

	va_end(args);
}
