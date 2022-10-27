#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: pointer to the list
 * @n: data for the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create node */
	listint_t *add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);
	add -> n = n;
	add -> next = NULL;
	add -> next = *head;
	*head = add;

	return (add);
}

