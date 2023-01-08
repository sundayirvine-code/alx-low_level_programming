#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table, or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = malloc(sizeof(hash_table_t));
    if (!ht)
        return NULL;

    ht->size = size;
    ht->array = calloc(size, sizeof(hash_node_t *));
    if (!ht->array)
    {
        free(ht);
        return NULL;
    }

    return ht;
}
