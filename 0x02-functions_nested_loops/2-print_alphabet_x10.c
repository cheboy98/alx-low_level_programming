#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 * Return: void
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char c;

	while (n < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}


}
