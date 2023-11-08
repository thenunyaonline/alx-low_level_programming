#include "calc.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * op_add - sums two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: sum of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtracts one number from another
 * @a: 1st number
 * @b: 2nd number
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - finds the modulo
 * @a: 1st number
 * @b: 2nd number
 * Return: Remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

