#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: The number of bytes
 *
 * Return: memoire
 */

void *malloc_checked(unsigned int b)
{
	void *memoire = malloc(b);

	if (memoire == NULL)
		exit(98);

	return (memoire);
}
