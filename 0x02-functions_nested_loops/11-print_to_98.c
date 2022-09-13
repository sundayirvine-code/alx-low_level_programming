#include "main.h"
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
                while(n<=98)
                {       
                        if(n == 98)
                        {
                            printf("%d", n);
                
                        }
                        else
                            printf("%d, ", n);
			n++;
                        
                }
                printf("\n");
        }
        else if (n > 98)
        {       
                for(n>=98)
                {       
                        if(n == 98)
                        {
                            printf("%d", n);
                            return;
                        }
                        printf("%d, ", n);
			n--;
                       
                }
                 printf("\n");
        }
        else
        {
            printf("%d", n);
            printf("\n");
        }
}

