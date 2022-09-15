#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * more_numbers: function that prints 10 times the 
 * numbers from 0 to 14
 *
 * @i: first loop integer
 * @j: second loop integer
 *
 * Return:Always void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for(j = 0; j < 15; j++)
		{
			_putchar(j + '0');

		}
		_putchar('\n');
	}
}
