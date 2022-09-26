#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: This is the C string to be scanned.
 * @c: This is the character to be searched in str.
 *
 * Return: pointer to the occurence of the first character
 * in c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	char *output;

	output = strchr(s, c);

	return (output);
}
