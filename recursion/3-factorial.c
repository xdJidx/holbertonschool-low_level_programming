#include "main.h"

/**
 * factorial - Calcule la valeur factoriel d'un nombre n
 * @n: Nombre aléatoire
 * Return: la valeur factoriel de n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
