#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: pointer 1 et chaine de caractère
 * @s2: pointer 2 et chaine de caratère
 * Return: concat_str
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, index2 = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[index2++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[index2++] = s2[index];

	return (concat_str);
}
