#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: head node of doubly linked list
 *
 * Return: Number of nodes of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while(ptr)
	{
		count++;
		printf("%d\n", ptr -> n);
		ptr = ptr -> next;
	}
	return (count);
}
