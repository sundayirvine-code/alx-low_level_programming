#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to list
 * @idx: position of insertion
 * @n: data of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int node_count;
	listint_t *temp, *new_node;

	/* check if list exists */
	if(!*head)
		return (NULL);

	/* count number of nodes */
	temp = *head;
	node_count = 0;

	while (temp)
	{
		node_count++;
		temp = temp -> next;
	}

	/* check if it is possible to add new node*/
	if (idx >= node_count)
		return (NULL);

	/* create new node */
	new_node = malloc(sizeof(listint_t));
	new_node -> n = n;
	new_node -> next = NULL;

	node_count = 0;
	temp = *head;

	/* traverse list */
	while (node_count != idx - 1)
	{
		temp = temp -> next;
		node_count++;
	}
	new_node -> next = temp -> next;
	temp -> next = new_node;

	return (new_node);
}
