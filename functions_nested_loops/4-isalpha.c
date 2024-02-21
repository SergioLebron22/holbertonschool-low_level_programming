#include <stdio.h>
#include "main.h"


/**
 * _isalpha - will check for alphabetic character
 *
 * @c: arg that is being checked
 *
 * Return: 1 is c is a letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
