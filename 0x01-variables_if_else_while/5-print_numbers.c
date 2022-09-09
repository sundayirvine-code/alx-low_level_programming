#include <stdio.h>

/**
 * main - Prints integer values from 0-9
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	putchar('\n');

	return (0);
}
