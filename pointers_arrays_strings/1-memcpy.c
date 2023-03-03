#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 *           to by @src into that pointed to by @dest.
 * @dest: la destination copie les éléments dans src
 * @src: la source a copier
 * @n: la taille de la src
 *
 * Return: La destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;

	/* const permet d'indiquer que l'élément ne doit pas être modifié */
	char *source = src;

	for (index = 0; index < n; index++)
	       destination[index] = source[index];

	return (dest);
}
