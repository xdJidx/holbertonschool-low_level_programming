#include<stdio.h>

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
char charType;
int intType;
int intLongType;
int intLongLongType;
float floatType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType);
printf("Size of a int: %zu byte(s)\n", sizeof(intType);
printf("Size of a long int: %zu byte(s)\n", sizeof(intLongType);
printf("Size of a long long int: %zu byte(s)\n", sizeof(intLongLongType);
printf("Size of a float: %zu byte(s)\n", sizeof(floatType);

return (0);
}
