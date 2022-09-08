#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{

    char char_type;
    int int_type;
    long log_type;
    long long long_long_type;
    float float_type;

    printf("size of a char: %d bytes\n", sizeof(char_type));
    printf("size of an int: %d bytes\n" sizeof(int_type));
    printf("size of a long int: %d bytes\n" sizeof(long_type));
    printf("size of a long long int: %d bytes\n" sizeof(long_long_type));
    printf("size of a float: %d bytes\n" sizeof(float_type));
    return(0);
}
