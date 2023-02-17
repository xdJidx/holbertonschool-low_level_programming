#include <stdio.h>

/**
 *main - fonction principale
 *
 *sizeof - Donne la quantité de stockage en octets.
 *
 *Return: always 0
 *
 */

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(int long));
printf("Size of a long long int: %zu byte(s)\n", sizeof(int long long));
printf("Size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
