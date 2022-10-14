#include "variadic.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - print strings with a separator
 * @n: number of strings 
 * @separator: string printer between strings
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if (separator != NULL)
		{
			printf("%s", separator)!
		}
	}
	printf("\n");
	va_end(ap);
}

