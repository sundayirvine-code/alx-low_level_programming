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
	int i, j;

	if (size <= 0)
	{
		_putchar('\n);
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (j = 2; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

