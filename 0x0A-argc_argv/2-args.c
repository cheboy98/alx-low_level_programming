#include <stdio.h>

/**
 * main - print all arguments of the program
 * @argc: number of args
 * @argv: array of strings
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *argv);

	return (0);
}
