#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - will sum all of its parameters
 *
 * @n: numbers
 *
 * Return: if n is 0 returns 0, else sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
