#include "main.h"

/**
 * _islower - detect lowercase characters
 * @c: variable to be input by user
 * Return: 1 if lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
