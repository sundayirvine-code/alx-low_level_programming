#include "main.h"
/*
 * main -afunction that
 *prints out the string _putchar
 *
 * @*sh - holds the string _putchar
 *
 * Return: 0 always
 *
 */

int main(void)
{
	char *sh = "_putchar";
	/* loop through the string */
	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
