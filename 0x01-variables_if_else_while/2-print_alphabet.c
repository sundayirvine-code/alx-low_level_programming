#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	/* your code goes there */
	while (int i = 0; i< 27; i++)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
