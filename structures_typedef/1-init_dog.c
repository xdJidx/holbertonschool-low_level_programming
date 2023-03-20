#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialise les variables de la stucture
 * @d: le chien a initialiser
 * @name: son nom
 * @age: son age
 * @owner: son cri
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
