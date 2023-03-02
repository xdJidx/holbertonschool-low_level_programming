#include "main.h"

/**
 * _strcmp - Compare 2 strings et donne leur difference
 * @s1: 1er string
 * @s2: 2eme string
 *
 * Return: Retounre la difference de s1 et s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}

	return (*s1 - *s2);
}
