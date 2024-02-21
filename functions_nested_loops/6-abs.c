#include <stdio.h>
#include "main.h"

/**
 * _abs - will compute the absolute value of and integer
 *
 * @n: arg that will be computed
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = (-1) * n;
	}
	else
		result = n;

	return (result);
}
