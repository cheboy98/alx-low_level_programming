#include <stdio.h>

/**
 * main - print the number of argument
 * @argc: number of args
 * @argv: array of strings
 *
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
