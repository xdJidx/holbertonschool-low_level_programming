#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - si positif ou négatif ou nul
 *
 *Return: alaways 0
 *
 * betty style doc for function main goes there
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	/* Si supérieur à zero*/
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	/* si inférieur à zero*/
	printf("%d is negative\n", n);
	}
	else
	{
	/* Sinon affiche zero*/
	printf("%d is zero\n", n);
	}

	return (0);
}
