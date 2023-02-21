#include <stdio.h>

/**
 *print_alphabet_x10 - sprint alphabet 10 time
 *
 */

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{

	for (letter = 'a' ; letter <= 'z' ; letter++)
	putchar(letter);

	i++;
	putchar('\n');
	}
}
