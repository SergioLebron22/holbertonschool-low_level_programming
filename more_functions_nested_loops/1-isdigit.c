#include <stdio.h>
#include "main.h"

/**
 * _isdigit - will check for a digit (0 through 9)
 *
 * @c: arg digit being checked
 *
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
