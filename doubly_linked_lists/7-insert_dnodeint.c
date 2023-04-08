#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Insert un nouveau noeud et donne sa position
 * @h: Un pointer en haut de la liste dlinstint_t
 * @n: l'integer du nouveau noeud
 *
 * Return: Si la fonction echoue - NULL
 * 		Sinon - L'adresse du nouveau noeud
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	tmp = *h;
	
	if ( idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return(new);
}
