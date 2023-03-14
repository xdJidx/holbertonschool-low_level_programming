#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: string.
 * @s2: string.
 * @n: The maximum number of bytes
 *
 * Return: concat.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	/*Si valeur de s1 et s2 nul*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*Calcule taille de s1*/
	for (index = 0; s1[index]; index++)
		len++;
	/*Memoire attribué a concat*/
	concat = malloc(sizeof(char) * (len + 1));

	/*Dans le cas où concat est nul*/
	if (concat == NULL)
		return (NULL);

	/*Reinitialise len à 0*/
	len = 0;

	/*Attribuer la valuer de s1[index] a concat selon la taille*/
	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	/*Attribuer la valeur de s2[index] a concat tant que je me trouve dans len */
	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	/*Dernière valeure de concat*/
	concat[len] = '\0';

	return (concat);
}
