#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the Bottom
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @n: Integer to be added to the list_t list on Bottom.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address add new element on the bottom.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *lastList;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	lastList = *head;
	while (lastList->next != NULL)
		lastList = lastList->next;
	lastList->next = new;
	new->prev = lastList;

	return (new);
}
