#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: number of args to the program
 * @argv: array that holds the args of the program
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
