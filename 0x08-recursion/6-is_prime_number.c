#include "main.h"

int helper_is_prime_number(int n, int div);
/**
 * is_prime_number - Compute if number is prime or not
 * @n: Compute number
 * Return: 1 if true and 0 is false
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper_is_prime_number(n, 1));
}

/**
 * helper_is_prime_number - helper function
 * @n: compute number
 * @div: divisors
 *
 * Return: 1 if true and 0 if false
 */

int helper_is_prime_number(int n, int div)
{
	if (div == 1)
		return (1);
	else if (n % div == 0 && div > 0)
		return (0);
	else
		return (helper_is_prime_number(n, div + 1));
}
