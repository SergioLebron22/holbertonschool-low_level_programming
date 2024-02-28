#include <stdio.h>
#include "main.h"

/**
 * _strcmp - will compare two string
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if equal, >0 if s1 is greater than s2, <0 if s1 is lower than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}


