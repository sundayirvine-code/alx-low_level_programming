#include <stdio.h>
#include <stdlib.h>

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


	char s[];
	int i, len;
	char *ptr;

	len = 1;

	while (i = 0; *str != '\0'; i++)
	{
		s[i] = *s;
		len++;
	}

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	else
		return (ptr);
}
