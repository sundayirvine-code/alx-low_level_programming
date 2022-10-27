#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint -  a function that frees a listint_t list.
 * @head: poiter to start of the list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *next_ptr;
	while(head)
	{
		next_ptr = head -> next;
		free(head);
		head = next_ptr;
	}
}

