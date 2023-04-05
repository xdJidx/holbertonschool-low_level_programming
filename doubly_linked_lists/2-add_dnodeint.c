#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint - ajoute un nouveau noeud en haut de la liste
 * @head: Double pointer en haut de la liste
 * @n: interger to be added to the dlistint_t list
 *
 * Return: If the function fails - NULL
 *		Otherwise - the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
