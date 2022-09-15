#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_diagonal(int n): function that prints a line
 * on the terminal 
 *
 * @n - the number of times the character should 
 * be printed
 * @i - for loop counter
 *
 * Return: Always void
 */

void print_line(int n)
{
        if (n == 0 || n < 0)
        {
                _putchar('\n');

        }
        else
        {
                int i;

                for (i = 0; i < n; i++)
                {
                        _putchar('\');

                }
                _putchar('\n');
        }
}
