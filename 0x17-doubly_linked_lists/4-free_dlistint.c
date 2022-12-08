#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head node of list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	while(head)
	{
		temp = head;
		head = head -> next;
		free(temp);
	}
}
