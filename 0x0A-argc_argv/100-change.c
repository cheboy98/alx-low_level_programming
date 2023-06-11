#include <stdio.h>
#include <stdlib.h>

/**
 * main - compute the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of string
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, number, result = 0;
	int cents = {25, 10 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(*(argv + 1));

	if (number < 0)
		printf("0\n");

	for (i = 0; j < sizeof(cents); j++)
	{
		while (number <= cents[i])
		{
			result += 1;
			number -= cents[i];
		}
	}

	printf("%i", result);
	return (0);
}
