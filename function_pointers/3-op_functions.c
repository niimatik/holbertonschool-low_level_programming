#include <stdio.h>
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
	int c = 0;
	c = a + b;
	return (c);
}
/**
 * op_add - subtract two integer
 * @a: first integer
 * @b: seconde integer
 *
 * Return: c
 */

int op_sub(int a, int b)
{
	int c = 0;
	c = a - b;
	return (c);
}
/**
 * op_add - multiply two integer
 * @a: first integer
 * @b: seconde integer
 *
 * Return: c
 */

int op_mul(int a, int b)
{
	int c = 0;
	c = a * b;
	return (c);
}
/**
 * op_add - divide two integer
 * @a: first integer
 * @b: seconde integer
 *
 * Return: c
 */

int op_div(int a, int b)
{
	int c = 0;
	c = a / b;
	return (c);
}
/**
 * op_add - modulo two integer
 * @a: first integer
 * @b: seconde integer
 *
 * Return: c
 */

int op_mod(int a, int b)
{
	int c = 0;
	c = a % b;
	return (c);
}
