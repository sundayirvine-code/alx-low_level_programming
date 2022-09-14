#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * _isalpha - checks for alphabetic character
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
