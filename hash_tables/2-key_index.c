#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - index of a key
 * @key: key
 * @size: size of table
 *
 * Return: index at which the key/value
 * pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x = hash_djb2(key);

	if (size)
		return (x % size);
	return (-1);
}
