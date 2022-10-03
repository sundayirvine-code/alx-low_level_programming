#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory which is a copy of the given string
 * @str: input string
 *
 * Return: NULL if str is NULL, pointer on success
 * NULL if insufficient memory 
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);


	char *s = strdup(str);

	if (s == NULL)
		return (NULL);

	else
		return (s);
}
