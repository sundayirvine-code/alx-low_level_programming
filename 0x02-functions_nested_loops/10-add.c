#include <main.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code
 *
 * add adds two integers an returns result
 * @a - first integer
 * @b - second integer
 *
 * Return: Always 0.
 */

int add(int a, int b)
{
	int res;
	res = a + b;
	return res;
}

int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
