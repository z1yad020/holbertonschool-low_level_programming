#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int node_idx;

	if (!ht)
		return;

	putchar('{');
	for (node_idx = 0; node_idx < ht->size; node_idx++)
	{
		tmp = ht->array[node_idx];

		if (!tmp)
			continue;

		while (tmp)
			printf("\'%s\': \'%s\', ", tmp->key, tmp->value);
	}
	putchar('}');
}
