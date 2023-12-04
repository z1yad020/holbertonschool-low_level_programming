#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer that point head)
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	listPtr newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(newNode->str);

	if (*head)
	{
		newNode->next = (*head)->next;
		(*head)->next = newNode;
	}
	else
	{
		newNode->next = NULL;
		*head = newNode;
	}


	return (newNode);
}
