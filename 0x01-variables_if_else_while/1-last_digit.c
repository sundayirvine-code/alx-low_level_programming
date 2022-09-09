#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - the main function.
 * @n - random number
 * @l - last diigit of l and also The number to be checked
 *
 */

int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,l);
	}
	if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n,l);
	}
	if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,l);
	}
	return (0);
}
