#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 *print_last_digit - prints the
 *last digit of an integer

 * Return: Always 0.
 */

int print_last_digit(int b)
{
	int x;

	x = b % 10;

	if (x < 0)
	{
		x *= -1;
	}
	_putchar('0' + x);
	return (x);
}
