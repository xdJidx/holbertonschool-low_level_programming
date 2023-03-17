#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of program
 * @ac: Nmbre d'élément du pointer av
 * @av: Chaine de caratere de plusieur éléments
 *
 * Return: str
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int index, i, elem;
	int size = ac;

	if (ac == 0)
		return (NULL);

	if (av == NULL)
		return (NULL);

	/*Calcule de la taille neccessaire pour la mémoire de str*/

	for (elem = 0; elem < ac; elem++)
	{
		for (i = 0; av[elem][i]; i++)
			size++;
	}

	str = malloc(sizeof(char) * (size + 1));
	
	if (str == NULL)
		return (NULL);

	/*Imnriquer les élément de av dans str*/

	index = 0;

	for (elem = 0; elem < ac; elem++)
	{
		for (i = 0; av[elem][i]; i++)
			str[index++] = av[elem][i];
		str[index++] = '\n';
	}

	str[size] = '\0';
	return (str);
}
