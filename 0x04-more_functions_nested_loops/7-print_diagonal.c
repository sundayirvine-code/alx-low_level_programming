#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_diagonal(int n): function that prints a line
 * on the terminal 
 *
 * @n - the number of times the character should 
 * be printed
 * @i - for loop counter
 *
 * Return: Always void
 */

void print_line(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
