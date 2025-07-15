#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add two integer
 * @a: first integer
 * @b: seconde integer
 *
 * Return: c
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integer
 * @a: first integer
 * @b: seconde integer
 *
 * Return: c
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integer
 * @a: first integer
 * @b: seconde integer
 *
 * Return: c
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integer
 * @a: first integer
 * @b: seconde integer
 *
 * Return: c
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo two integer
 * @a: first integer
 * @b: seconde integer
 *
 * Return: c
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
