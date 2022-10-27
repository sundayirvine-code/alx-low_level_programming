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
	if(!head)
		return (0);
	else
	{
		listint_t *temp;
		temp = *head;
		*head = temp -> link;
		free(temp);
	}
	temp = NULL;
	return ((*head) -> n);
}

