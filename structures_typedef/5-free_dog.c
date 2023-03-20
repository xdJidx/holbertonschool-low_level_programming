#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - libère la mémoire de dog
 * @d: les paramètres du chien
 * Return: d si non NULL
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
