#include "lists.h"

/**
 * dlistint_len - number of elements in list
 * @h: pointer to list (head)
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *node = h;

	while (node)
	{
		node = node->next;
		count++;
	}
	return (count);
}
