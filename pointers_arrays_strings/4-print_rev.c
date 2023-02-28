#include "main.h"

/**
 * print_rev - écrit la chaine de caractère à l'envers
 *
 * @s: une chaine de caractere
 */

void print_rev(char *s)
{
	int len = 0, i;

	while (*s != '\0')
	{
		len++;
		++s;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
