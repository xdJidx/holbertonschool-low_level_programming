#include "main.h"


int calcule_sqrt(int num, int root);
int _sqrt_recursion(int n);


/**
 * _sqrt_recursion - Returne la racine de n
 * @n: le nombre
 * Return: le calcule de sa racine
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	else
		return (calcule_sqrt(n, root));
}

/**
 * calcule_sqrt - Recherche la racine de num
 * @num: le chiffre
 * @root: la racine
 * Return: la racine
 */

int calcule_sqrt(int num, int root)
{
	if (root * root == num)
		return (root);

	if (root * root > num)
		return (-1);

	return (calcule_sqrt(num, root + 1));
}
