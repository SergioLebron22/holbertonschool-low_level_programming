#include <stdio.h>
#include "main.h"

/**
 * factorial - will return the factorial of a given number
 *
 * @n: given number
 *
 * Return: -1 if negative, 1 if n is 0,
 * otherwise the result for factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

