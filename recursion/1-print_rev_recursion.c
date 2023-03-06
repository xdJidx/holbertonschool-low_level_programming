#include "main.h"

/**
 * _print_rev_recursion - print un string avec une recursion
 * @s: chaine de caractère
 * Return: alwaays 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
