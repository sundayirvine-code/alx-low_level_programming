#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a list.
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr -> n);
		ptr = ptr -> next;
		count++;
	}
	return (count);
}

