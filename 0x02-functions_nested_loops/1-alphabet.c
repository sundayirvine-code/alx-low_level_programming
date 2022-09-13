#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - check the code
 * print_alphabet - a function 
 * that prints the alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int letter;
	for(letter='a'; letter<='z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

