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
	dnodePtr newNode, current;

	newNode = malloc(sizeof(dlistint_t));
	current = get_dnodeint_at_index(*h, idx);

	if (!newNode || !h || !current)
		return (NULL);

	newNode->n = n;
	newNode->next = current->next;


	if (current->next)
		current->next->prev = newNode;

	current->next = newNode;

	if (!*h)
	{
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}

	newNode->prev = current;

	return (newNode);
}


/**
 * get_dnodeint_at_index - nth node of a linked list
 * @head: pointer to pointer that point to head
 * @index: index
 * Return: point to nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dnodePtr current = head;
	size_t i = 0;

	while (current && i++ != index)
		current = current->next;

	if (index > i)
		return (NULL);

	return (current);
}
