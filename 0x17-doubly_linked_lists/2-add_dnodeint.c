#include "lists.h"

/**
 * add_dnodeint - adds a node at beginig of list
 * @head: double ptr to head of list
 * @n: new node value to be added
 *
 * Return: the address of new node or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *ptr = *head;
	new_node = malloc(sizeof(dlistint_t));
	if(!new_node)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		new_node -> n = n;
		new_node -> prev = NULL;
		new_node -> next = NULL;
	}
	else
	{
		new_node -> n = n;
		new_node -> next = *head;
		new_node -> prev = NULL;
		ptr -> prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
