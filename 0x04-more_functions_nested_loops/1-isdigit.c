#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * int _isdigit(int c): function that checks for a 
 * digit 0 through 9
 *
 * @c: input value
 *
 * Return: 1 if c is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (isdigit(c) > 0)
		return (1);
	else
		return (0);
}
