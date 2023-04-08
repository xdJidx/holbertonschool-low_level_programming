#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - affiche tous les éléments d'une liste
 * @h: une chaine de character de la liste
 * Return: Number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}