#include "lists.h"

/**
 * list_len - print size of linked list
 * @h: pointer to list (head)
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *node = h;

	while (node)
	{
		node = node->next;
		count++;
	}
	return (count);
}
