#include "lists.h"

/**
 * dlistint_len - returns number of elements of list
 * @h: head of list
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while(ptr)
	{
		count++;
		ptr = ptr -> next;
	}
	return (count);
}
