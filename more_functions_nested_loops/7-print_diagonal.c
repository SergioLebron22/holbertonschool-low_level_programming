#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - will draw a diagonal line on the terminal
 *
 * @n: is the number of times \ will be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int c;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
