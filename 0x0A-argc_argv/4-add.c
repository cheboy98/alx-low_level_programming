#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check_if_digit(char *s);

/**
 * main - add the args of the program
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int digit;
	int i = 1, result = 0;

	while (i < argc)
	{
		if (check_if_digit(*(argv + i)))
		{
			digit = atoi(*(argv + i));
			result += digit;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	
	printf("%d\n", result);

	return (0);
}

/**
 * check_if_digit - check if arguments are digit
 * @arg: arguments
 *
 * Return 1 if arg is integer 0 if not
 */

int check_if_digit(char *s)
{
	unsigned int i = 0;

	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
