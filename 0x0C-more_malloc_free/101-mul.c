#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiply two positive numbers
 * @argc: number of args
 * @argv: pointer to arrays
 *
 * Return: mul
 */

int main(int argc, char **argv)
{
	int mul;
	char *s1, *s2;
	int s1_length, s2_length, size;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	s1 = argv[1];
	s2 = argv[2];

	if (!isdigit(s1) || !isdigit(s2))
	{
		printf("Error\n");
		exit(98);
	}
	s1_length = strlen(s1);
	s2_length = strlen(s2);
	size = s1_length + s2_length + 1;

	mul = malloc(sizeof(int) * size);
	if (mul == NULL)
		return (NULL);
	mul = argv[1] * argv[2];

	return (mul);
}
