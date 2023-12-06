#include "lists.h"

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

	return (current);
}
