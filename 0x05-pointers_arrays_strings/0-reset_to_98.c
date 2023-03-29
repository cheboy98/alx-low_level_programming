#include "main.h"

/**
 * main - update the value of a variable in another function
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int *p;

	p = &n;
	reset_to_98(p);

	return (0);
}
