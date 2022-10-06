#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings'
 * @s1: string 1
 * @s2: string 2
 * @n: concatenates the first n bytes of s2
 *
 * Return: a pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l1, l2, sum, i, j;

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (s1 == NULL)
		l1 = 0;
	if(s2 == NULL)
		l2 = 0;

	sum = l1 + n + 1;

	if (n >= l2)
		sum = l1 + l2 + 1;

	s = malloc(sizeof(char) * sum);

	if (s == NULL)
		return (NULL);

	for (i = 0; *s1 != '\0'; i++)
	{
		s[i] = s1[i];
		s1++;
	}

	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
		s2++;
	}
	s[i] = '\0';

	return (s);
}
