#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to print
 * @(*f)(char *): function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
