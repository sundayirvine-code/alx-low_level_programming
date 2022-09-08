include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n",sizeof(char  c));
	printf("Size of an int: %lu byte(s)\n",sizeof(int i));
	printf("Size of a long int: %lu byte(s)\n",sizeof(long b));
	printf("Size of a long long int: %lu byte(s)\n",sizeof(long long c));
	printf("Size of a float: %lu byte(s)\n",sizeof(float f));
     	return (0);
}
