//#include <main.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{       
        /*if the number is lower than 98*/
        if (n<98)
        {       
                for(n; n<=98; n++)
                {       
                        if(n == 98)
                        {
                            printf("%d", n);
                
                        }
                        else
                            printf("%d, ", n);
                        
                }
                printf("\n");
        }
        else if (n > 98)
        {       
                for(n; n>=98; n--)
                {       
                        if(n == 98)
                        {
                            printf("%d", n);
                            return;
                        }
                        printf("%d, ", n);
                       
                }
                 printf("\n");
        }
        else
        {
            printf("%d", n);
            printf("\n");
        }
}

int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}

    
