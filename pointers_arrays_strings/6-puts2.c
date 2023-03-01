#include "main.h"

/**
 * puts2 - ecrit 1 caractère sur 2
 *
 * @str: variable
 *
 */

void puts2(char *str)
{
	int index = 0;
	int len = 0;

	while (str[index++])
	len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');

}
