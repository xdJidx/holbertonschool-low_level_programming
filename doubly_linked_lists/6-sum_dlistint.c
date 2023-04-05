#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * sum_dlistint - Return the sum of all data (n) of dlistint_t
 * @head: A pointer to the head of the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
