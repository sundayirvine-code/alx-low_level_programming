#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes of memory to assign
 *
 * Return: pointer to allocated memory
 */

void *malloc_checjed(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
