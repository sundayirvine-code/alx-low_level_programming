#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
        char letter;
        for(letter='a'; letter<='z'; letter++)
        {
                _putchar(letter);
                
        }
        _putchar('\n');
}

int main(void)
{
        int i;
        for(i=0; i<10; i++)
        {
            print_alphabet();
        }
        return (0);
}
