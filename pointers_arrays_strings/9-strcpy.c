#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - will copy the string pointed to by src to the
 * buffer pointed to by dest
 *
 * @dest: where the string is being copied
 *
 * @src: string being pointed to, to copy
 *
 * Return: to the pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (counter >= 0)
	{
		*(dest + counter) = *(src + counter);
		if (*(src + counter) == 0)
			break;
		counter++;
	}
	return (dest);
}
