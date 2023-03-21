#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: un string
 * @size: la taille
 * @cmp: pointer de fonction
 * Return: int_index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
