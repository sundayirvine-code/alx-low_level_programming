#include "main.h"
#include <string.h>

/**
 * *_strncpy - function that copies a string
 * @dest: final string
 * @src: source string
 * @n: The number of characters to be copied from source.
 * Return: char dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return dest;
}
