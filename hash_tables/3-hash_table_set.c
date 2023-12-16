#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	unsigned long int node_idx;

	if (!node || !strlen(key))
	{
		free(node);
		return (0);
	}

	node_idx = key_index((unsigned char *)key, ht->size);

	node->key = strdup(key);
	node->value = strdup(value);
	if (!node->key || !node->value)
	{
		free(node);
		free(node->key);
		free(node->value);
		return (0);
	}

	node->next = ht->array[node_idx];
	ht->array[node_idx] = node;
	return (1);
}
