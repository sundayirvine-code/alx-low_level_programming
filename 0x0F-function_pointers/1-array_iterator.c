#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - performs an action on each element of an array
 * @array: input array
 * @size: array size
 * @action: pointer to a function
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
