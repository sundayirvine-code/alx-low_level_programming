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
	x = b%10;
	if (x<0)
	{
		x *= -1;
	}
	_putchar('0' + x);
	return x;
}

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
