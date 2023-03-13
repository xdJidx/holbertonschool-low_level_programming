#include "main.h"
#include <stdlib.h>


/**
 * create_array - creates an array of chars, and initializes char.
 * @size: la taille du tableau
 * @c: valeur dans le tableau
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
