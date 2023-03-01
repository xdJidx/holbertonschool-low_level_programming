#include "main.h"

/**
 * print_array - affiche les éléments d'un tableau
 * @a: variable pointeur
 * @n: varibale taille tableau
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
