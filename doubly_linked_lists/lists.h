#ifndef __FILE_NAME__
#define __FILE_NAME__

#pragma pack(1)
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct dlistint_s *dnodePtr;

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

dnodePtr lastNode(dnodePtr);
size_t print_dlistint(const dlistint_t *);
size_t dlistint_len(const dlistint_t *);
dlistint_t *add_dnodeint(dlistint_t **, const int);
dlistint_t *add_dnodeint_end(dlistint_t **, const int);
void free_dlistint(dlistint_t *);
dlistint_t *get_dnodeint_at_index(dlistint_t *, unsigned int);
int sum_dlistint(dlistint_t *);
dlistint_t *insert_dnodeint_at_index(dlistint_t **, unsigned int, int);
int delete_dnodeint_at_index(dlistint_t **, unsigned int);

#endif
