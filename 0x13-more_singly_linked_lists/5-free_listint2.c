#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head - pointer to start of list
 *
 * Return : Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *next_ptr = *head;

	while(*head)
	{
		next_ptr = next_ptr -> next;
		free(*head);
		*head = next_ptr;
	}
}

