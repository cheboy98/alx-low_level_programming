#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int mul, arg1, arg2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		mul = arg1 * arg2;

		printf("%d\n", mul);
	}
	return (0);
}
