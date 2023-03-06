#include "main.h"

/**
 * _puts_recursion - print un string avec une recursion
 * @s: chaine de caractère
 * Return: alwaays 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
	}
	s++;
	_puts_recursion(s);
}
