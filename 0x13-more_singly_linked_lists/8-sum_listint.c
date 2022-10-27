#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - eturns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer to start of list
 *
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	if(!head)
		return (0);

	temp = head;
	sum = 0;

	while (temp)
	{
		sum += temp -> n;
		temp = temp -> next;
	}
	return (sum);
}

