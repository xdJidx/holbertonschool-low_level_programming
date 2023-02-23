#include "main.h"

/**
 * more_numbers - compte jusque 14 10 fois
 *
 */

void more_numbers(void)
{
	int num;
	int rep = 0;

	while (rep < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
	rep++;
	_putchar('\n');
	}
}
