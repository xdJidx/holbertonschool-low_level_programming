#include "main.h"

/**
 * string_toupper - Imprime toutes les lettres
 * minuscule d'un string en majuscule
 * @str: chaine de caractere
 *
 * Return: la chaine de caractere en majuscule
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
