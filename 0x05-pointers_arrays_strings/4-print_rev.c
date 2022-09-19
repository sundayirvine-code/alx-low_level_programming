#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s - input string
 * Return: no return
 */

void print_rev(char *s)
{
	int l;

	l = strlen(s);

	while (l > 0)
	{
		_putchar(*(s + (l - 1)));
		l--;
	}
	_putchar('\n');
}

