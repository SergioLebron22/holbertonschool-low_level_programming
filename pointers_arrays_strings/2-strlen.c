#include <stdio.h>
#include "main.h"

/**
 * _strlen - will return the len of a string
 *
 * @s: arg string being passed as a parameter
 *
 * Return: int the string length
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
