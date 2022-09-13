#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - check the code.
 *
 * print_alphabet - prints alphabets
 * in lowercase
 *
 * Return: alway 0
 */

void print_alphabet()
{
        int i;
	for(i=0; i<10; i++)
	{
		char letter;
        	for(letter='a'; letter<='z'; letter++)
        	{
                	_putchar(letter);
                
        	}
        	_putchar('\n');
	}
}

