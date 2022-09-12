#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check the code
 * _abs - computes the absolute value 
 * of an integer
 *
 * Return: Always 0.
 */

int _abs(int b)
{
	return abs(b);
}

int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
