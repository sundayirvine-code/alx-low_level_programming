#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * @i - test variable
 */

void print_numbers(void)
{
        int i;

        for (i = 0; i < 10; i++)
        {
		if (i != 2 || i != 4)
		{
                	_putchar(i + '0');
		}

        }
        _putchar('\n');

}
