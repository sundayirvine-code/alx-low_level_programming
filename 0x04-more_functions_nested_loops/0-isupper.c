#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

/**
 * int _isupper(int c) -a function that checks 
 * for an uppercase character
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
