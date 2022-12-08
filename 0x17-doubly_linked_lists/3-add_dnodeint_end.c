#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 * @head: head node of list
 * @n: node value to be added
 *
 * Return: new node address or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if(!new_node)
		return (NULL);

	/* empty list */
	if(!ptr)
	{
		new_node -> n = n;
		new_node -> prev = NULL;
		new_node -> next = NULL;
		*head = new_node;
	       	return (new_node);	
	}
	else
	{
		/* traverse to end of list */
		while(ptr -> next)
		{
			ptr = ptr -> next;
		}
		new_node -> n = n;
		new_node -> prev = ptr;
		new_node -> next = NULL;
		ptr -> next = new_node;
		return (new_node);
	}
	
}
