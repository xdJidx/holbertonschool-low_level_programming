#include "main.h"

/**
 * print_triangle - Print triangle
 * @size: longueur
 *
 */


void print_triangle(int size)
{
	int lig, dis;

	if (size > 0)
	{
		for (lig = 1; lig <= size; lig++)
		{
			for (dis = (size - lig); dis > 0; dis--)
				_putchar(' ');

			for (dis = lig; dis > 0; dis--)
				_putchar('#');
		_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
