#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main:check the code
 * print_to_98:prints to 98 from value n
 *
 * @n: value to check against
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if(n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
			n++;
		}

		printf("\n");
	}

	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				return;
			}
			else
				printf("%d, ", n);

			n--;
		}

		printf("\n");

	}

	else
	{
		printf("%d", n);
		printf("\n");
	}
}

