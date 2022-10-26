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
	size_t count;
	listint_t *ptr;

	count = 0;
	ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr -> n);
		ptr = ptr -> next;
		count++;
	}
	return (count);
}

