#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: le pointer de memoire
 * @b: la valeur renseignée
 * @n: la taille de la mémoire
 *
 * Return: La mémoire
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *memory = s;
	char value = b;
	unsigned int index;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
