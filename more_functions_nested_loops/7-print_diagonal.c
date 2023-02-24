#include "main.h"

/**
 * print_diagonal - affiche en diagonale
 * @n: variable
 *
 */

void print_diagonal(int n)
{
	int marge, distance;

	if (n > 0)
	{

		for (marge = 0; marge < n; marge++)
		{
		for (distance = 0; distance < marge; distance++)
			_putchar(' ');
		_putchar('\\');

		if (marge == n - 1)
			continue;

		_putchar('\n');
		}
	}
	_putchar('\n');
}
