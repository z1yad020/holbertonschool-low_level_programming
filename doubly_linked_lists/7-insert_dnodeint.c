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

	if (!*h && !idx && newNode)
	{
		*h = newNode;
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;
		return (newNode);
	}

	current = get_dnodeint_at_index(*h, idx);

	if (!newNode || !h || !current)
		return (NULL);

	if(!idx)
		return(add_dnodeint(h, n));

	newNode->n = n;
	newNode->next = current;

	current->prev->next = newNode;

	if (!*h)
	{
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}

	newNode->prev = current->prev;
	current->prev = newNode;

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

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: pointer to pointer that point head)
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dnodePtr newNode;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
