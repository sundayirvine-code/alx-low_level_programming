#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: This is the main C string to be scanned.
 * @needle: This is the small string to be searched with-in haystack
 *
 * Return: a pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);

	return (ret);
}

