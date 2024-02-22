#include <stdio.h>
#include "main.h"

/**
 * _isupper - will check for uppercase characters
 *
 * @c: arg the character being checked
 *
 * Return: 1 if c is upper, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
