#include <stdio.h>

/*
 * main - main function
 * print_alphabet - function
 * that prints the alphabet in lowercase
 *
 * Return: always 0
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_alphabet()
{
        char letter;
        for(letter='a'; letter<='z'; letter++)
        {
                putchar(letter);
                
        }
        putchar('\n');
}

int main(void)
{
        print_alphabet();
        return (0);
}
