#include "main.h"

/**
 * swap_int - swap 2 values
 * @a: interger
 * @b: interger
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
