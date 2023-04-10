#include <stdio.h>

/**
 * main - print all args
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
