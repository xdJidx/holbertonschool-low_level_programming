#include <stdio.h>
#include "main.h"

/**
 * _abs - absolute value
 * @r: is sign
 * Return: -r or r
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return	(-r);
}
