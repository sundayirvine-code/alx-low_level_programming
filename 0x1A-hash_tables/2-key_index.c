#include "hash_tables.h"
/**
 * key_index - returns the index of a given key
 * @key: The key that generated index
 * @size: size of the array of the hash table
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	index = hash_djb2(key) % size;
	return (index);
}