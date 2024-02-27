#include <stdio.h>
#include "main.h"

/**
 * _strncat - will concatenate two strings
 *
 * @dest: destination
 * @src: source, string to be appended
 * @n: n bytes to be used from src
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
