#include "main.h"

/**
 * set_bit - retourne la valeur d'un bit à un index donné dans un nombre binaire.
 * @n: Le nombre binaire dont on veut connaître la valeur d'un bit.
 * @index: index du bit que l'on souhaite la valeur, index 0 correspond au bit de poids faible.
 *
 * Return: La valeur du bit à l'index donné (0 ou 1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask; 

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;

	return (n & mask) ? 1 : 0;
}
