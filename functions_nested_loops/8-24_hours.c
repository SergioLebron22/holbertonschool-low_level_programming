#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - will print every single minute of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	int x = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (x < 1440)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');

		d++;

		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
		x++;
	}
}
