#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: value associated with the element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* get the index */
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	/* try to retrieve value at index */
	hash_node_t *node = ht -> array[index];
	if(!node)
		return (NULL);
	if (strcmp(node -> key, key) == 0)
		return node -> value;
	/* loop through linked list */
	while(node)
	{
		if (strcmp(node -> key, key) == 0)
                	return (node -> value);
		node = node -> next;
	}
	return (NULL);
}
