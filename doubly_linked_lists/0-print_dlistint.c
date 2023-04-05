#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint- affiche tous les éléments d'une liste
 * @h: une chaine de character de la liste
 * Return: Number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
