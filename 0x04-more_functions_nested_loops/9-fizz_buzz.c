#include <stdio.h>

/**
 * main - prints fizz buzz
 *
 * @i - loops 100 times
 * @f - holds the string fizz
 * @b - holds the string Buzz
 * @fb - holds the string fizzbuzz
 *
 * Return - Always 0
 */

int main()
{
    int i;
    char *f = "Fizz";
    char *b = "Buzz";
    char *fb = "FizzBuzz";
    
    for (i = 1; i < 100; i++)
    {
	if (i == 100)
    		printf("%s", b);		
        /* if multiple of 3*/
        if ((i % 3) == 0 && (i % 5) == 0)
        {
            printf("%s ", fb);
            continue;
        }
        if ((i % 3) == 0)
        {
            printf("%s ", f);
            continue;
        }
        if ((i % 5) == 0)
        {
            printf("%s ", b);
            continue;
        }
        else
        {
            printf("%d ", i);
        }
        
        
    }
    putchar('\n');

    return 0;
}
