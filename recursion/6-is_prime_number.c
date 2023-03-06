#include "main.h"


int diviseur(int num, int div);
int is_prime_number(int n);


/**
 * is_prime_number - Vérifie si n est un nombre premier
 * @n: le nombre
 * Return: 1 si nombre premier sinon 0
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n < 0)
		return (0);

	if (n == 1)
		return (0);

	else
		return (diviseur(n, div));
}

/**
 * diviseur - Recherche le plus grand diviseur
 * @num: le chiffre
 * @div: diviseur
 * Return: 1 si num est son propre diviseur
 */

int diviseur(int num, int div)
{
	if (div == num)
		return (1);

	if (num % div == 0)
		return (0);

	return (diviseur(num, div + 1));
}
