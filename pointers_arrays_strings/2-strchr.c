#include "main.h"

/**
 * _strchr - Localiser un character dans un string.
 * @s: string
 * @c: le character à l'occaliser
 *
 * Return: (s + index) ou NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
