#include "main.h"
#include <stdio.h>

/**
 * int _isupper(int c) - a function
 * that checks for uppercase character
 *
 * @c: Character to check against
 *
 * Return: 1 for  uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);

	}
	else
		return (0);
}
