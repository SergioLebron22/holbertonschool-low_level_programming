#include <stdio.h>
#include "main.h"

/**
 * puts2 - will print every other character of a string
 *
 * @str: string being passed as parameter
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
