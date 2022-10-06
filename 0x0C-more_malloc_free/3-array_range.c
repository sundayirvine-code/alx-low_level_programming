#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: starting point
 * @max: ending point
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
		return (NULL);

	for (i = 0; i <= max; i++)
		;

	s = malloc(sizeof(int) * i);

	if (s = NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
		s[i] = min + i;

	return (s);
}
