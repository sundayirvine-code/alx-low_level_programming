#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of list
 * @index: index of the node, starting from 0
 *
 * Return: Node if exists else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int nodes = 0, count = 0;

	/* number of nodes */
	while(ptr)
	{
		nodes++;
		ptr = ptr -> next;
	}

	/* index does not exist */
	if (index >= nodes)
		return (NULL);

	ptr = head;

	while(count != index)
	{
		count++;
		ptr = ptr -> next;
	}
	return (ptr);
}
