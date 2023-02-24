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
		for (lign = 1; lign <= size; lign++)
		{
			for (col = 1; col <= size; col++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
