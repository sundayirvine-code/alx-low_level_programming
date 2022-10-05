#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory which is a copy of the given string
 * @str: input string
 *
 * Return: Null if string is a NULL, pointer on success
 */

char *_strdup(char *str)
{
    char *s;
    int j;

    for (j = 0; *str != '\0'; j++)
    {
        str++;
    }

    s = malloc(sizeof(char) * j);

    if (s == NULL)
    {
        return (NULL);
    }

    j = 0;
    while (*str != '\0')
    {
        str++;
        j = j + 1;
    }

    return (s);
}
