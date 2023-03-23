#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Calcule une addition de a et b
 * @a: integer
 * @b: integer
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calcule une soustraction de a et b
 * @a: integer
 * @b: integer
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calcule une multiplication de a et b
 * @a: integer
 * @b: integer
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calcule une division de a et b
 * @a: integer
 * @b: integer
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calcule le modulo de a et b
 * @a: integer
 * @b: integer
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
