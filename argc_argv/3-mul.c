#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multipli 2 arguments nombres
 * @argc: taille du programme
 * @argv: chaine de caractere avec les arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc > 3 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
