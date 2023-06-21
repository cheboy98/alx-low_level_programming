#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: addend
 * @b: addend
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub numbers
 * @a: minuend
 * @b: subtrahend
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply numbers
 * @a: factor
 * @b: factor
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide numbers
 * @a: dividend
 * @b: divisor
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - compute the remainder
 * @a: dividend
 * @b: divisor
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
