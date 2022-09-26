#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: This is the C string to be scanned.
 * @accept: This is the C string containing the characters to match
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);
	return (ret);
}

