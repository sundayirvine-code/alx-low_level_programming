#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


/**
 * add_to_sorted_list - Add a node to a sorted linked list
 * @node: node to add
 * @ht: hash table containing the sorted linked list
 */
void add_to_sorted_list(shash_node_t *node, shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
		return;
	}

	temp = ht->shead;
	while (temp != NULL)
	{
		if (strcmp(temp->key, node->key) > 0)
		{
			node->sprev = temp->sprev;
			node->snext = temp;
			if (temp->sp

/**
 * shash_table_create - Create a sorted hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Add a key/value pair to a sorted hash table
 * @ht: hash table to add to
 * @key: key to add
 * @value: value to add
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	new_node->next = temp;
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
		return (1);
	}

	temp = ht->shead;
	while (temp != NULL)
	{
		if (strcmp(temp->key, new_node->key) > 0)
		{
			new_node->sprev = temp->sprev;
			new_node->snext = temp;
			if (temp->sprev != NULL)
				temp->sprev->snext = new_node;
			temp->sprev = new_node;
			if (temp == ht->shead)
				ht->shead = new_node;
			return (1);
    }
  }
}

/**
 * shash_table_get - Retrieve a value associated with a key from a sorted hash table
 * @ht: hash table to look in
 * @key: key to look up
 *
 * Return: value associated with the key, or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Print a sorted hash table
 * @ht: hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int flag;

	if (ht == NULL)
		return;

	printf("{");
	temp = ht->shead;
	flag = 0;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete a sorted hash table
 * @ht: hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *next;
	unsigned long int i;

	if (ht == NULL)
		return;

	temp = ht->shead;
	while (temp != NULL)
	{
		next = temp->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = next;
	}

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}

	free(ht->array);
	free(ht);
}

/**
 * shash_table_print_rev - Print a sorted hash table in reverse order
 * @ht: hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int flag;

	if (ht == NULL)
		return;

	printf("{");
	temp = ht->stail;
	flag = 0;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}
