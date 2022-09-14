#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *times_table:prints the 9 times table
 *
 * @i -first loop counter
 * @j - second loop counter
 * @x - tracks the multiples
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		x = 0;
		for (j = 0; j < 10; j++)
		{
			if (j == 9)
			{
				printf("%d", x);
				/*_putchar(x + '0');*/
				break;
			}
			if ((x / 10) == 0)
				printf("%d,  ", x);
			else
			{
				printf("%d, ", x);
			}
			x += i;
		}
		printf("\n");
	}
}

