#include <stdio.h>
#include "main.h"

/**
 * print_rev - whill print a string in reverse
 *
 * @s: string being passed as parameter
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
