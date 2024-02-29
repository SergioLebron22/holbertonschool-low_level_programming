#include <stdio.h>
#include "main.h"

/**
 * puts_half - will print half of a string
 *
 * @str: string that will be halfed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int c = 0;
	int i;

	while (c >= 0)
	{
		if (str[c] == '\0')
			break;
		c++;
	}

	if (c % 2 == 1)
		i = c / 2;
	else
		i = (c - 1) / 2;

	for (i++; i < c; i++)
		_putchar(str[i]);
	_putchar('\n');
}
