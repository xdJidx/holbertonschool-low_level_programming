#include "main.h"

/**
 * print_square - Print un carré
 * @size: variable coté
 *
 */

void print_square(int size)
{
	int lign, col;

	if (size > 0)
	{
		for (lign = 0; lign < size; lign++)
		{
			for (col = 0; col < size; col++)
				_putchar('#');

			if (col == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
