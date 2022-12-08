#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index index of a dlistint_t linked list
 * @index: index of the node that should be deleted
 * @head: head node of list
 *
 * Return: 1 o success else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int nodes = 0, count = 0;
	dlistint_t *p, *n, *ptr = *head, *temp = NULL;

	if (!ptr)
		return (-1);

	/* number of nodes */
	while (ptr)
	{
		nodes++;
		ptr = ptr -> next;
	}

	if (index >= nodes || nodes == 0)
		return (-1);

	ptr = *head;

	while(count != index)
	{
		ptr = ptr -> next;
		count++;
	}
	/* del head node */
	if (index == 0)
	{
		*head = ptr -> next;
		if(ptr -> next)
			ptr -> next -> prev = NULL;
		free(ptr);
		return (1);
	}

	/* del last node */
	if (index == nodes - 1)
	{
		temp = ptr -> prev;
		temp -> next = NULL;
		ptr -> prev = NULL;
		free(ptr);
		return (1);
	}

	/* middle node */
	p = ptr -> prev;
	n = ptr -> next;
	ptr -> prev = NULL;
	ptr -> next = NULL;
	free(ptr);
	p -> next = n;
	n -> prev = p;
	return (1);
}
