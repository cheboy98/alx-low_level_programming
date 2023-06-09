#include <stdio.h>
#include "main.h"

/**
 * main - print the program's name
 * @argc: number of arguments passed
 * @argv: pointer to array of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);

	return (0);
}
