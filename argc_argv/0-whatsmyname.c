#include <stdio.h>
#include <stdlib.h>

/**
 * main - Affiche le nom du programme
 * @argc: taille du programme
 * @argv: chaine de caractere
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
