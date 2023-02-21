#include <stdio.h>

/**
 * _islower - check is letter is lower
 * @c: is lower
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
