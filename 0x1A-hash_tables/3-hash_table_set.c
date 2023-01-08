#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value:  value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht -> size);
	hash_node_t *head = ht -> array[index];
	hash_node_t *ptr = head;
	hash_node_t *new = NULL;

	if(ht == NULL || *key == '\0' || *value == '\n')
		return (0);

	/*if key already exists */
	while(!ptr)
	{
		/*if keys match*/
		if (strcmp(ptr -> key, key) == 0)
		{
			free(ptr -> value);
			ptr -> value = strdup(value);
			return (1);
		}
		ptr = ptr -> next;
	
	}
	
	/* if key does not exist insert new node at begining */

	new = malloc(sizeof(hash_node_t));
	if(!new)
		return (0);
	
	new -> key = strdup(key);
	new -> value = strdup(value);
	ht -> array[index] = new;
	new -> next = head;

	return (1);
}
