#include "main.h"

/**
 * prime_number - checks if n is a prime number or not
 * @n: input number to check
 * @i: counter
 *
 * Return: 1 if prime 0 otherwise
 */

int prime_number(int n, int i)
{
	if (n == 2)
		return (1);

	if (n == 1)
		return (0);

	if (n <= 0)
		return (0);

	/* terminating condition */
	if (i > n)
		return (1);

	if (i != 1)
	{
		if (i != n)
		{
			if (n % i == 0)
			{
				/* not prime */
				return (0);
			}
		}
	}
	i = i + 1;
	prime_number(n, i);
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: test integer
 * @i: counter
 * @prime: return value
 *
 * Return: 1 if prime 0 of not
 */

int is_prime_number(int n)
{
	int i = 1;
	int prime;

	prime = prime_number(n, i);

	return (prime);
}

