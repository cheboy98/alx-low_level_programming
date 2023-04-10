#include <stdio.h>

/**
 * main - print the number of args
 * @argc: number of args passed
 * @argv: array that stores the args
 *
 * Return: 0 always
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
