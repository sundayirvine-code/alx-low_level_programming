#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: head node of list
 * @idx: index position for insertion
 * @n: new node value
 *
 * Return: address of new node else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0, nodes = 0;
	dlistint_t *temp, *new_node, *ptr = *h;

	/* create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node -> n = n;
	new_node -> next = NULL;
	new_node -> prev = NULL;

	/* number of nodes */
	while(ptr)
	{
		nodes++;
		ptr = ptr -> next;
	}

	ptr = *h;

	/* insert at begining */
	if(idx == 0)
	{
		new_node -> next = ptr;
		ptr -> prev = new_node;
		return (new_node);
	}

	if(idx > nodes)
		return (NULL);

	/* insert at end */
	if (idx == nodes)
	{
		while(ptr -> next)
			ptr = ptr -> next;

		ptr -> next = new_node;
		new_node -> prev = ptr;
		return (new_node);
	}

	/* insert middle and end */
	while(count != idx)
	{
		ptr = ptr -> next;
		count++;
	}
	temp = ptr -> prev;
	temp -> next = new_node;
	new_node -> prev = temp;
	new_node -> next = ptr;
	ptr -> prev = new_node;
	return (new_node);
}
