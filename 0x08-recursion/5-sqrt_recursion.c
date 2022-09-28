#include "main.h"

/**
 * sqr - finds square roo with recursion
 * @n: number we are looking to find its sqrt
 * @i: the possible sqrt
 *
 * Return: i
 */

int sqr(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (sqr(n, i + 1));
}

/**
 * _sqrt_recursion - find square root of n
 * @n: test integer
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

