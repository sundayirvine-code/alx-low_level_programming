#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: Number of array elements
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int s, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(sizeof(unsigned int) * nmemb);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		s[i] = 0;

	return (s);
}

