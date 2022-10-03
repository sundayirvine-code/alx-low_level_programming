#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: Second string
 *
 * Return: Pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	/* allocate new memory */
	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}


	/* loop through strings */
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < l2; j++, i++)
	{
		s[i] = s2[j];
	}

	return (s);
}

