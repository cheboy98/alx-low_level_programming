#include "main.h"
#include <string.h>

int helper_is_palindrome(char *s, int start, int end);

/**
 * is_palindrome - check if string is palindrome or not
 * @s: compute string
 *
 * Return: 1 if true and 0 if not
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0 || length == 1)
		return (1);
	return (helper_is_palindrome(s, 0, length - 1));
}

/**
 * helper_is_palindrome - helper function
 * @s: string
 * @start: start of string
 * @end: end of string
 *
 * Return: 1 if true and 0 if false
 */

int helper_is_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] == s[end])
		return (helper_is_palindrome(s, start + 1, end - 1));
	else
		return (0);
}
