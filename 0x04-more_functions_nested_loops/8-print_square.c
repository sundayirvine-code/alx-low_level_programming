#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints a square followed
 * by a new line
 *
 * @size - the size of the square
 * @i - first loop variable
 * @j - second loop variable
 * 
 * Return - always void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n);
	}
}
