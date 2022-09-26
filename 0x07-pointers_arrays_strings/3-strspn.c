#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: This is the main C string to be scanned.
 * @accept: the string containing the list of characters to match in str1.
 *
 * Return: Number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);

	return (len);
}

