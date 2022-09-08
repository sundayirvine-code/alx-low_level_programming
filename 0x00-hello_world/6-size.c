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

    printf("size of a char: %zu bytes\n", sizeof(char_type));
    printf("size of an int: %zu bytes\n" sizeof(int_type));
    printf("size of a long int: %zu bytes\n" sizeof(long_type));
    printf("size of a long long int: %zu bytes\n" sizeof(long_long_type));
    printf("size of a float: %zu bytes\n" sizeof(float_type));
    return(0);
}

