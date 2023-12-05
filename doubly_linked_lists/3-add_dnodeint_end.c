#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer that point head
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dnodePtr newNode;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = lastNode(*head);

	if (*head)
		lastNode(*head)->next = newNode;
	else
		*head = newNode;

	return (newNode);
}


/**
 * lastNode - Find last node
 * @head: pointer to type
 * Return: pointer to last node
 */
dnodePtr lastNode(dnodePtr head)
{
	if (!head->next)
		return (head);
	return (lastNode(head->next));
}
