#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcodes of the main function
 * @argc: store the number of bytes to print
 * @argv: store nber of bytes in an array of pointers
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)main, bytes);
	return (0);
}

/**
 * print_opcodes - print opcodes
 * @s: main
 * @bytes: number of bytes to print
 *
 * Return: Nothing
 */

void print_opcodes(char *s, bytes)
{
	int i;

	for (i = 0; i < bytes; i++)
	{
		printf("%.2hhx", s[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");
}
