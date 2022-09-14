#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * main - check the code
 *
 * _islower - returns 1 if c is lowercae
 * returns 0 othewise
 *
 * Return: always 0
 */

int _islower(int c)
{
	if (islower(c) > 0)
	{
		return 1;
	}
	else{
		return 0;
	}
}
