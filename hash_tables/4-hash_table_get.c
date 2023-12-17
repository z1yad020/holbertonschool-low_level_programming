#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int node_idx;

	if (!ht || !strlen(key))
		return (0);

	node_idx = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[node_idx];
	while (tmp)
	{
		if (strcmp(key, tmp->key))
		{
			tmp = tmp->next;
			continue;
		}
		return (tmp->value);
	}
	return (NULL);
}
