#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer that point head)
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	listPtr newNode;

	if (!head || !str)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(newNode->str);
	newNode->next = NULL;

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
listPtr lastNode(listPtr head)
{
	if (!head->next)
		return (head);
	return (lastNode(head->next));
}
