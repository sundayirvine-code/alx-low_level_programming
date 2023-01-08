#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value:  value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const unsigned char *key, const char *value)
{
	unsigned long int index = hash_djb2(key) % ht ->size
	hash_node_t *head = ht -> array[index];
	hash_node_t *ptr = head;
	hash_node_t *new = NULL;

	/*if key already exists */
	while(!ptr)
	{
		/*if keys match*/
		if (strcmp(ptr -> key, key) == 0)
		{
			strcpy(ptr -> value, value);
			return (1);
		}
		ptr = ptr -> next;
	
	}
	
	/* if key does not exist insert new node at begining */

	new = malloc(sizeof(hash_node_t));
	if(!new)
		return (0);
	strcpy(new -> key, key);
	strcpy(new -> value, value);
	ht -> array[index] = new;
	new -> next = head;

	return (1);
}
