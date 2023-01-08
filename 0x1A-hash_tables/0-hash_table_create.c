#include "hash_tables.h"

/**
 * hash_table_create - creates a  hash table
 * @size: size of the array
 *
 * Return: Pointer to the newly created hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	/* create the pointer */
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table -> size = size;
	table -> array = malloc(sizeof(hash_node_t) * size);

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		table -> array[i] = NULL;

	return (table);
}
