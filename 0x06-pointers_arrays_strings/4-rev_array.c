#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - function that reverses an array of integers
 * @a: Input array
 * @n: size of the array
 * Return: no return value
 */

void reverse_array(int *a, int n)
{
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
