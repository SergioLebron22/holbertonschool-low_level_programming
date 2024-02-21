#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _islower - checks for lowercase characters
 *
 * @c: arg of the character we're checking
 *
 * Return: 1 if c is lowecase otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
		return (0);

}
