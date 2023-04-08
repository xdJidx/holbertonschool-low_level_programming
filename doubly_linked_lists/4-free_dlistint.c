#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of dlistint_t
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
