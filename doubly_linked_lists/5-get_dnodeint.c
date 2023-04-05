#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @index: The index to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address add new element on the bottom.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
