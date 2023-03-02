#include "main.h"

/**
 * reverse_array - affiche l'inverse d'un tableau de nombre
 * @a: le pointer 
 * @n: Nombre d'élément de l'array
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
