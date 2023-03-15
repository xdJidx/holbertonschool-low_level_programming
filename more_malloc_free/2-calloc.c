#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array with 0
 * @nmemb: elements of array
 * @size: nomber of bytes
 *
 * Return: memoire
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memoire;
	char *str;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memoire = malloc(nmemb * size);

	if (memoire == NULL)
		return (NULL);

	str = memoire;

	for (index = 0; index < (size * nmemb); index++)
		str[index] = '\0';

	return (memoire);
}
