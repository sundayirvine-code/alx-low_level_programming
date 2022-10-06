#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: Number of array elements
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (size *nmemb); i++)
		s*((char *)(s) + i) = 0;

	return (s);
}

