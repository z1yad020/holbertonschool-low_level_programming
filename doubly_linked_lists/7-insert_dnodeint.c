#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer that point head
 * @idx: index
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dnodePtr current = *h, newNode;

	if (!idx)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		current = current->next;
		if (!current)
			return (NULL);
	}

	if (!current->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = current;
	newNode->next = current->next;
	current->next->prev = newNode;
	current->next = newNode;
	return (newNode);
}
