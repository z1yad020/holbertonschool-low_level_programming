#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer that point head
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dnodePtr newNode, lastP;

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	lastP = lastNode(*head);

	lastP->next = newNode;
	newNode->prev = lastP;

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
