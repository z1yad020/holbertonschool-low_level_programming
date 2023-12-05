#include "lists.h"

/**
 * print_dlistint - print double linked list
 * @h: pointer to list (head)
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *node = h;

	while (node)
	{
		printf("%d\n" ,node->n);
		node = node->next;
		count++;
	}
	return (count);
}
