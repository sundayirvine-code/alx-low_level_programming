#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes of memory to assign
 *
 * Return: Nothing
 */

void *malloc_checjed(unsigned int b)
{
	unsigned int *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
