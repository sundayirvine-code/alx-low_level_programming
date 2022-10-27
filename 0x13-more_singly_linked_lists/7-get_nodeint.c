#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to begining of list
 * @index: index of node to be returned
 *
 * Return: pointer of node a index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;

	if (!head)
		return (NULL);

	temp = head;
	count = 0;

	while(1)
	{
		if (count >= index)
			return (temp);
		else
		{
			temp = temp -> next;
			count++;
		}
	}
	return (NULL);
}

