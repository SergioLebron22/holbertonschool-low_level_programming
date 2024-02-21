#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - this program will print the alphabet in lower
 *
 * Return: Always 0(Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	putchar('\n');
}
