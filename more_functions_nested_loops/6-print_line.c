#include "main.h"

/**
 * print_line - imprime un nombre de ligne avec ___
 * @n: nombre de __
 *
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n == 0)
		_putchar('\n');
	_putchar('_');
	i++;
	}
	_putchar('\n');
}
