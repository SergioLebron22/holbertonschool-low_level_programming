#include <stdio.h>
#include "main.h"

/**
 * _memcpy - will copy the memory area
 *
 * @dest: destination
 * @src: source
 * @n: n amount of bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
