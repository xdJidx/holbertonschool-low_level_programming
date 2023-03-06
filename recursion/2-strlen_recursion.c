#include "main.h"

/**
 * _strlen_recursion - Calcul la taille d'un string
 * @s: le string
 * Return: la taille
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}

	return (len);
}

