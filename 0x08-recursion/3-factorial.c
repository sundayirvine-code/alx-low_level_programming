#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: input integer
 *
 * Return: integer factorial if n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
