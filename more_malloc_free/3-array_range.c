#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @max: value max of array
 * @min: value min of array
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int index = 0;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (; index < size; index++)
		ptr[index] = min++;

	return (ptr);
}
