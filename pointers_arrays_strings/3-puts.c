#include "main.h"

/**
 * _puts - écrit la chaine de caractère et passe à la ligne suivante
 *
 * @str: une chaine de caractere
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
