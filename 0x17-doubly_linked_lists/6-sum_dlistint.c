#include "lists.h"

/**
 * sum_dlistint - returns sum of all list data
 * @head: head node of list
 *
 * Return: sum else 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	/* empty list */
	if (!ptr)
		return (0);

	while(ptr)
	{
		sum += ptr -> n;
		ptr = ptr -> next;
	}
	return (sum);
}
