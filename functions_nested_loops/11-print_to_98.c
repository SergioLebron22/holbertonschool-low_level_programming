#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - will print all natural numbers from n to 98
 *
 * @n: startring point
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");
}
