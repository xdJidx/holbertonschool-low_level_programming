#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - affiche une chaine de caractère
 * @f: fonction pour afficher une chaine de caractere
 * @name: la chaine de caractère
 * Retunrn: print_name or NULL
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;
	f(name);
}
