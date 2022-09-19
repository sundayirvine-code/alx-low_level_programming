#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s - input string
 * Return: no return
 */

void rev_string(char *s)
{
	int i = 0;
	int l;

	l = strlen(s);

	char c[l + 1];

	while(l > 0)
	{
		*(c + i)  = *(s + (l - 1));
		i++;
		l--;
	}
	s = c; 
	
}

