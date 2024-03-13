#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - will add two numbers
 *
 * @a: num 1
 * @b: num 2
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - will subtract two numbers
 *
 * @a: num 1
 * @b: num 2
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - will multiply two numbers
 *
 * @a: num 1
 * @b: num 2
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - will divide two numbers
 *
 * @a: num 1
 * @b: num 2
 *
 * Return: result of division of a by b
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
 * op_mod - will divide and return remainder
 *
 * @a: num 1
 * @b: num 2
 *
 * Return: remainder of division
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
