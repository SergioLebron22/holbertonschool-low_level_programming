#include <stdio.h>
#include "main.h"

/**
 * string_toupper - will change all letters of a string to uppercase
 *
 * @s: string being changed
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{
		if ((*(s + counter) >= 97) && (*(s + counter) <= 122))
			*(s + counter) = *(s + counter) - 32;
		counter++;
	}
	return (s);
}
