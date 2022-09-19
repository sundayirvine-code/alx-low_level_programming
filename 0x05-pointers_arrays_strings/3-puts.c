#include "main.h"
#include <string.h>

/**
 * _puts - function that prints a string
 * @*str - pointer to the string
 * Return: Always void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
