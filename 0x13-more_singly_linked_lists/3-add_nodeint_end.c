#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a list
 * @head: double pointer to begining of a list
 * @n: data to be added 
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* create node */
	listint_t *add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	/* traverse list */
	listint_t *ptr = *head;
	while (ptr -> next)
	{
		ptr = ptr -> next;
	}
	pr -> next = add;

	return (add);
}

