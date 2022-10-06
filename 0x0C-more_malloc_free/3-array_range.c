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
	int i, j;
	int *s;

	if (min > max)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
	}

	s = malloc(sizeof(int) * i);

	if (s = NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		s[j] = min + i;

	return (s);
}
