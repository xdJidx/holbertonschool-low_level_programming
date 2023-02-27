#include "main.h"

/**
 * _strlen - calcule la longeur d'un Sting
 * @s: string aléatoire
 * Return: here longeur
 */

int _strlen(char *s)
{
	int longeur = 0;

	while (*s++)
		longeur++;

	return (longeur);
}
