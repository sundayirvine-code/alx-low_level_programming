#include "lists.h"

/**
 * print_list - prints nodes in a list and returns number of elements
 * @h: pointer to the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int coumter = 0;

	if (h -> str == NULL)
		printf("[0] (nil)"\n);

	else
	{
		while (h)
		{
			Printf("[%i] %s\n", h -> len);
			h = h -> next;
			count+;
		}
	}
	return (counter);
}

