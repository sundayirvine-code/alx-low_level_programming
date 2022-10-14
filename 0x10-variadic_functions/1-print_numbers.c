#include "variadic.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers with a separator
 * @separator: string printer btn numbers
 * @n: number of integers passed
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
