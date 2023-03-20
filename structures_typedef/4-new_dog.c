#include <string.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - fonction qui créenouveau chien
 * @name: son nom
 * @age: son age
 * @owner: son cri
 * Return: dogtwo le nouveau chien ou NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogtwo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogtwo = malloc(sizeof(dog_t));

	if (dogtwo == NULL)
		return (NULL);

	dogtwo->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dogtwo->name == NULL)
	{
		free(dogtwo);
		return (NULL);
	}

	dogtwo->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dogtwo->owner == NULL)
	{
		free(dogtwo->name);
		free(dogtwo);
		return (NULL);
	}

	dogtwo->name = strcpy(dogtwo->name, name);
	dogtwo->age = age;
	dogtwo->owner = strcpy(dogtwo->owner, owner);

	return (dogtwo);
}
