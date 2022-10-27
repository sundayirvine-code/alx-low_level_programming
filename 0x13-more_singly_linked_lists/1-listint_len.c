#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * listint_len -  returns the number of elements in a linked list
 * @h: ponter to the list
 *
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		ptr = ptr -> next;
		count++;
	}
	return (count);
}

