#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete at index
 * @head: pointer to pointer that point head
 * @index: index
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dnodePtr remNode = *head;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		*head = remNode->next;
		(*head)->prev = NULL;
		free(remNode);
		return (1);
	}

	for (; index; index--)
	{
		remNode = remNode->next;
		if (!remNode)
			return (-1);
	}

	if (!remNode->next)
	{
		remNode->prev->next = NULL;
		free(remNode);
		return (1);
	}

	remNode->prev->next = remNode->next;
	remNode->next->prev = remNode->prev;
	free(remNode);
	return (1);
}
