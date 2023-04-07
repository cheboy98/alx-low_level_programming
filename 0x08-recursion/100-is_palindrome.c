#include "main.h"

int _strlen_recursion(char *s);
int check_palindrome(char *s, int l, int r);

/**
 * is_palindrome - compute if it's palindrome
 * @s: string
 *
 * Return: 1(true) and 0(false)
 */

int is_palindrome(char *s)
{
	if (_strlen_recursion(s) == 0 || _strlen_recursion(s) == 1)
		return (1);
	else
		return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - compute the length
 * @s: compute string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * check_palindrome - check if palindrome
 * @s: string
 * @l: start 0
 * @r: end of string
 *
 * Return: 1(true) and 0(false)
 */

int check_palindrome(char *s, int l, int r)
{
	if (l >= r)
	{
		return (1);
	}
	else if (s[l] == s[r])
	{
		return (check_palindrome(s, l + 1, r - 1));
	}
	else
	{
		return (0);
	}
}
