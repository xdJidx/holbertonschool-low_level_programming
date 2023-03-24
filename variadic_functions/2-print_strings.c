#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - affiche les strings suivi par une nouvelle ligne
 *
 * @separator: élément entre chaque n
 * @n: nbre éléments int dans la fonction
 * @...: all variable in function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	char *str;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(print, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(print);
}
