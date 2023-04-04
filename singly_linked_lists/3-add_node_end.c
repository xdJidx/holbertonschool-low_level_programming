#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address add new element on the bottom.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *strCopy;
	int strLen = 0, index;
	list_t *new;
	list_t *lastList;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	strCopy = strdup(str);
	if (strCopy == NULL)
	{
		free(new);
		return (NULL);
	}

	for (index = 0; str[index]; index++)
		strLen++;

	new->str = strCopy;
	new->len = strLen;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		lastList = *head;
		while (lastList->next != NULL)
			lastList = lastList->next;
		lastList->next = new;
	}

	return (new);
}
