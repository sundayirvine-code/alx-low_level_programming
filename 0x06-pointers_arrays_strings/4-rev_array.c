#include "main.h"
#include <stdlib.h>
#include <iostream> 
using namespace std;

/**
 * reverse_array - function that reverses an array of integers
 * @a: Input array
 * @n: size of the array
 * Return: no return value
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
