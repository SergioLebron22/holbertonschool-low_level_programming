#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - will return the value of x
 * to the power of y
 *
 * @x: number
 * @y: exponent
 *
 * Return: -1 if y is negative, else value of pow
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
