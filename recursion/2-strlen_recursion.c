#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - will return the len of a string
 *
 * @s: string
 *
 * Return: len of string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		return ((length + 1) + _strlen_recursion(s + 1));
	}
	return (0);
}
