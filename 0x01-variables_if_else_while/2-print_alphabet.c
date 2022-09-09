#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* @i - declare charcter variable
 * main - main function 
 *
 * return 0 from main
 *  
 */
 
int main(void)
{
	char alphabet;
	//assigning 'a' as initial alphabet
	alphabet='a';

	//print statement
	//and print the alphabets from 'a' to 'z'
	while(alphabet<='z')
	{
		//printing the alphabets
		scanf(alphabet);
		//increasing the value by 1
		alphabet++;
	}
	return (0);
}
