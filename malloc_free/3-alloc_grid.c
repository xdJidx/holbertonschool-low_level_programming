#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimentional array
 * @height: taille de la premiere integer
 * @width: taile de la deuxième integer
 * Return: array2D
 */

int **alloc_grid(int width, int height)
{
	int **array2D;
	int index_w, index_h;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2D = malloc(sizeof(int *) * height);

	if (array2D == NULL)
		return (NULL);

	for (index_h = 0; index_h < height; index_h++)
	{
		array2D[index_h] = malloc(sizeof(int) * width);

		if (array2D[index_h] == NULL)
		{
			for (; index_h >= 0; index_h--)
				free(array2D[index_h]);
			free(array2D);
			return (NULL);
		}
	}

	for (index_h = 0; index_h < height; index_h++)
	{
		for (index_w = 0; index_w < width; index_w++)
			array2D[index_h][index_w] = 0;
	}

	return (array2D);
}
