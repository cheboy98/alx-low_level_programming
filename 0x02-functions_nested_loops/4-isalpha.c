#include "main.h"

/**
 * _isalpha - detect uppercase characters
 * @c: variable to be input by user
 * Return: 1 if lowercase or 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
