#include <stdio.h>
#include "main.h"

/**
 * print_sign - will print the sign of the number recieved
 *
 * @n: arg number that is being passed as parameter
 *
 * Return: 1 if positive, 0 if n equals 0, and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
