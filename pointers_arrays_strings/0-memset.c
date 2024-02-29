#include <stdio.h>
#include "main.h"

/**
 * _memset - will fill memory with a constant byte
 *
 * @s: pointer to memory area
 * @b: constant byte
 * @n: n amount of bytes
 *
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		*(s + i) = b;

	return (s);
}
