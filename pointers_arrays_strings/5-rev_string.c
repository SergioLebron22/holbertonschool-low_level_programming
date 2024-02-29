#include <stdio.h>
#include "main.h"

/**
 * rev_string - will reverse a string
 *
 * @s: string being passed as parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	int start = 0;
	int end = 0;

	while (s[end] != '\0')
		end++;

	end--;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
