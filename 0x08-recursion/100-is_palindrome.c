#include "main.h"
#include <string.h>

/**
 * palindrome - returns 1 if s is a palindrome otherwise 0
 * @s: string to check
 * @loop_counter: number of iterations to perform
 * @first: tracks index fro left to right
 * @last: tracks index from roght to left
 *
 * Return: 1 if palindrome 0 otherwise
 */

int palindrome(char *s, int loop_counter, int first, int last)
{
	if (first > loop_counter)
		return (1);

	if (s[first] != s[last])
		return (0);

	first = first + 1;
	last = last - 1;

	palindrome(s, loop_counter, first, last);

	return (1);
}

/**
 * is_palindrome - checks if s is a palindrome
 * @s: input strig to check
 *
 * Return: 1 if s is palindrome 0 otherwise
 */

int is_palindrome(char *s)
{
	int last, first, loop_counter, len, ret;

	len = strlen(s);
	loop_counter = len / 2;
	first = 0;
	last = len - 1;

	ret = palindrome(s, loop_counter, first, last);
	return (ret);
}
