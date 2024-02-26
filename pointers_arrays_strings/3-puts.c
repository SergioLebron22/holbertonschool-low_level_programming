#include <stdio.h>
#include "main.h"

/**
 * _puts - will print a string to stdout
 *
 * @str: string that is going to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
