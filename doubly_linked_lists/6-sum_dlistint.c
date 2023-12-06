#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a linked list
 * @head: pointer to pointer that point to head
 * Return: sum of n's in nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dnodePtr current = head;
	long int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
