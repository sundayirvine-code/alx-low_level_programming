#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: src
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
