#include "main.h"

/**
 * puts_half - ecrit un string depuis le milieu
 *
 * @str: variable
 *
 */

void puts_half(char *str)
{
	int index = 0;
	int len = 0;
	int n = 0;

	while (str[index++])
	len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
