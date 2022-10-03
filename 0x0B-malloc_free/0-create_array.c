#include <stdlib.h>
#include <stdio.h>

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

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	else
	{
		s[0] = c;
		return (s);
	}
}
