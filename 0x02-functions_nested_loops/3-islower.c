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
       	if(islower(c) > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
        int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
        return (0);
}
