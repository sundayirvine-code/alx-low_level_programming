#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

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

    	r = _isalpha('H');
    	_putchar(r + '0');
    	r = _isalpha('o');
    	_putchar(r + '0');
    	r = _isalpha(108);
    	_putchar(r + '0');
    	r = _isalpha(';');
    	_putchar(r + '0');
    	_putchar('\n');
    	return (0);
}
