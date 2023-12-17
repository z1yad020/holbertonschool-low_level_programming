#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * dltlist - delete hash node list
 * @tmp: temp hash node
 * Return: void
 */
void dltlist(hash_node_t *tmp)
{
	if (tmp->next)
		dltlist(tmp->next);

	free(tmp->key);
	free(tmp->value);
	free(tmp);
}

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int node_idx;

	if (!ht)
		return;

	for (node_idx = 0; node_idx < ht->size; node_idx++)
	{
		if (ht->array[node_idx])
			dltlist(ht->array[node_idx]);
		else
			free(ht->array[node_idx]);
	}
	free(ht->array);
	free(ht);
}
