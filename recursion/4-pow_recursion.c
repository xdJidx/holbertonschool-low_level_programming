#include "main.h"

/**
 * _pow_recursion - Met un nombre x à la puissance y
 * @x: le nombre
 * @y: la puissance
 * Return: le resultat de la puissance x par y
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (result = result * _pow_recursion(x, y - 1));
}
