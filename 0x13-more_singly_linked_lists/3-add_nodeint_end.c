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
	listint_t *ptr, *temp, *p;

	if (*head == NULL)
	{
		p = malloc (sizeof(listint_t));
		*head = p;
		p -> n = n;
		p -> next = NULL;
	}
	else
	{
		ptr = *head;
		temp = malloc(sizeof(listint_t));
		temp -> n = n;
		temp -> next = NULL;

		while(ptr -> next)
		{
			ptr = ptr -> next;
		}
		ptr -> next = temp;
	}
	return (temp);
}

