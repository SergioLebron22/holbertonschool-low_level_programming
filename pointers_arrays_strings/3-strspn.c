#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: arg
 *
 * Return: unsigned int length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int b = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		b = 1;

		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				b = 0;
				break;
			}
		}

		if (b == 1)
			break;
	}
	return (i);
}
