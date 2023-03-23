#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of operations.
 * @argc: The number of arguments
 * @argv: An array of value.
 *
 * Return: le resutltat de la fonction f
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *f;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	f = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(f) == NULL || f[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*f == '/' && num2 == 0) ||
	    (*f == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(f)(num1, num2));

	return (0);
}
