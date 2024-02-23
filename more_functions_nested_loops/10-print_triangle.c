#include "main.h"

/**
 * print_triangle - will print triangles
 *
 * @size: arg is th size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int c;
	int i;
	int j;

	c = 0;
	i = size - 1;
	while (c < size)
	{
		i = size - 1 - c;
		j = c + 1;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		c++;
	}

	if (size <= 0)
		_putchar('\n');
}
