#include <stdio.h>

/**
 * main - Prints hexadecimal 0-9 and a-f
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
		putchar((num % 10) + '0');
	for (num = 'a' ; num <= 'f' ; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
