#include "main.h"

/**
 * print_rev - écrit la chaine de caractère à l'envers
 *
 * @s: une chaine de caractere
 */

void print_rev(char *s)
{
	int len = 0;
	int index;

	while (*s != '\0')
	{	
		len++;
		++s;
	}

	for (index = len; index > 0; index--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
