#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert a binary to unsigned int
 * @b: binary number to convert to int
 *
 * Return: 0 if another number are on b else return convert num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
