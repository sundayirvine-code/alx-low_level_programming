#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: pointer to a linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h -> next;
		count+;
	}
	return (count);
}

