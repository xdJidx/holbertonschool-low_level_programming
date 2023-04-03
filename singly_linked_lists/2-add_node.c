#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int len = 0, index;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}

	for (index = 0; str[index]; index++)
		len++;

	new->str = copy;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
