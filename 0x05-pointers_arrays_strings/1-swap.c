#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a - first iteger
 * @ - second integer
 *
 * Return : Always void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	
	*b = c;
}

