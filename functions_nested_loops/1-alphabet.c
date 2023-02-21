#include <stdio.h>

/**
 *print_alphabet - sprint alphabet
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	putchar(letter);

	putchar('\n');

}

