#include <stdio.h>
#include "main.h"

/**
 * _strchr - will locate a character in a string
 *
 * @s: string
 * @c: character that we are trying to locate
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i;
	int end = '\0';

	for (i = 0; *(s + i) != end; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
