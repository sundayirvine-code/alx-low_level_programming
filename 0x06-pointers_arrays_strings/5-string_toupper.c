#include "main.h"

/**
 * string_toupper - function that cahnages all lowercase 
 * letters of a string to uppercase
 * @str: input string
 * @output: output string
 * Return: Char output
 */

char *string_toupper(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (str);
}

