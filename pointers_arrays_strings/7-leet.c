#include <stdio.h>
#include "main.h"

/**
 * leet - wil encode a string into 1337
 *
 * @s: string being encoded
 *
 * Return: char
 */

char *leet(char *s)
{
	int counter = 0;
	int i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + counter) == low_letters[i] || *(s + counter) == upp_letters[i])
			{
				*(s + counter) = numbers[i];
				break;
			}
		}
		counter++;
	}

	return (s);
}

