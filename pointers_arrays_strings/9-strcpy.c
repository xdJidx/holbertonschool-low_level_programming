#include "main.h"

/**
 * _strcpy - copie la chaine de caratère d'un pointeur et la donne a un autre
 * @dest: variable
 * @src: variable
 * Return: retourne dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);

}
