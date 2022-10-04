#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creaates an array of chars
 * @size: size of the array
 * @c: charcter to initialize
 *
 * Return: NULL if size is 0 otherwise a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
