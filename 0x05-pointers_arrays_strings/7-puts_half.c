#include "main.h"
#include <string.h>

/**
 * puts_half -function that prints last half of the string
 *
 * str - input string
 *
 * Return : Void
 */

void puts_half(char *str)
{
	int len, n;

	len = strlen(str);

	if (len % 2 != 0)
	{
		n = (len -1 ) / 2;

		while (n < len)
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
	else
	{
		n = len / 2;

		while (n < len)
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
}

