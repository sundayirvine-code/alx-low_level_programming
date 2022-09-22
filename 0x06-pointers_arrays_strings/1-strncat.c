#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes to be used from src
 * Retun: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}

