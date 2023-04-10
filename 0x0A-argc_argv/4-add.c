#include <stdio.h>
#include <stdlib.h>

/**
 * main - add the args
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;


	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= 'A' && *argv[i] <= 'Z') || (*argv[i] >= 'a' && *argv[i] <= 'z'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				int dig = atoi(argv[i]);

				sum += dig;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

