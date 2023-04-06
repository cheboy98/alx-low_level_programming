#include "main.h"

int prime(int n, int e);
/**
 * is_prime_number - determine if it's prime or not
 * @n: number
 *
 * Return: 1(true) or 0(false)
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, n - 1));
	}
}

/**
 * prime - compute the prime numbers
 * @n: ref number
 * @e: eval
 *
 * Return: primes
 */

int prime(int n, int e)
{
	if (e == 1)
	{
		return (1);
	}
	else if (n % e == 0 && e > 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, e - 1));
	}
}
