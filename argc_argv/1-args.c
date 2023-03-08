#include <stdio.h>

/**
 * main - Affiche le nom du programme
 * @argc: taille du programme
 * @argv: chaine de caractere
 * Return: always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
