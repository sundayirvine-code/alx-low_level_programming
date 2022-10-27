#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: double pointer to start of list 
 *
 * Return:  head node’s data (n). else 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if(!head)
		return (0);
	else
	{
		temp = *head;
		*head = temp -> next;
		free(temp);
	}
	
	return ((*head) -> n);
}

