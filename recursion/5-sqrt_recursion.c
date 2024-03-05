#include <stdio.h>
#include "main.h"

/**
 * _sqrt_helper - is the helper function for recursion
 *
 * @n: squared number being compared with base
 * @base: base number being checked
 *
 * Return: natural square root
 */

int _sqrt_helper(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (_sqrt_helper(n + 1, base));
}

/**
 * _sqrt_recursion - will return the natural square root of a number
 *
 * @n: number
 *
 * Return: -1 if n does not have natural square root,
 * else result
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(1, n));
}
