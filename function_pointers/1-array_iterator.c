#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function excecutes a function on each element of an array
 * @array: le tableau
 * @size: la taille du tableau
 * @action: la fonction qui retourne les éléments
 * Return: les éléments du tableau ou NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
