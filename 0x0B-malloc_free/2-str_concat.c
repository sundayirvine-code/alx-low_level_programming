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
		return (NULL);
	}


	/* loop through strings */
	for (i = 0; *s1 != '\0'; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; *s2 != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i + 1] = '\0';

	return (s);
}

