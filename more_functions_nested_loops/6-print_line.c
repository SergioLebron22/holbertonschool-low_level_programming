#include "main.h"

/**
 * print_line - will draw a linein the terminal
 *
 * @n: arg length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n == 0)
		_putchar('\n');

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
