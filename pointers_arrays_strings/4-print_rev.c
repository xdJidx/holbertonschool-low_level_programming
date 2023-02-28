#include "main.h"

/**
 * print_rev - écrit la chaine de caractère à l'envers
 *
 * @s: une chaine de caractere
 */

void print_rev(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		++p;
	}

	while (p >= s)
	{
	_putchar(*p--);
	}

	putchar('\n');
}
