#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * dlistint_len - affiche tous les éléments d'une liste
 * @h: une chaine de character de la liste
 * Return: Number of nodes
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
