#include "main.h"
#include <string.h>

/**
 * _memcpy - a function that copies memory area
 * @dest: This is pointer to the destination array
 * where the content is to be copied
 * @src: This is pointer to the source of data to be copied
 * @n: This is the number of bytes to be copied.
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
