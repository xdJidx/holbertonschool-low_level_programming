#include <stdio.h>
#include <stdlib.h>

/**
 * main - Affiche tous les arguments du program
 * @argc: taille du programme
 * @argv: chaine de caractere avec les arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
