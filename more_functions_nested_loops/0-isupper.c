#include "main.h"

/**
 *_isupper - Check if letter is Upper
 *@c: variable letter
 * Return: 0 therwise or 1 if c is upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
