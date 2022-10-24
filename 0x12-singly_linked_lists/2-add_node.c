#include "strings.h"
#include <string.h>

/**
 * add_node - adds node at begining of list
 * @head: double pointer to list
 * @str: string
 *
 * Return: pointer to list
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

	len = strlen(str);
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new -> str = strdup(str);
	new -> len = len;
	new -> next = (*head);
	(*head) = new;
	return (*head);
}

