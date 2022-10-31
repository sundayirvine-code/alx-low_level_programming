#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: input string
 *
 * Return unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, total, decimal, i;
	len = strlen(b);
	decimal = 1;
	total = 0;

	for ( i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			total += decimal;
		decimal *= 2;
	}
	return (total);
}

