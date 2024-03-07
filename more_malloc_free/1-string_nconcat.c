#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - will concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: byte length of s2
 *
 * Return: pointer to newly allocated memory where the
 * concatenated string is or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	int len1;
	int len2;
	int sign = n;
	int counter, counter1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (sign >= len2)
	{
		sign = len2;
		newstr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		newstr = malloc(sizeof(char) * (len1 + n + 1));

	if (newstr == NULL)
		return (NULL);

	for (counter = 0; counter < len1; counter++)
	{
		newstr[counter] = s1[counter];
	}
	for (counter1 = 0; counter1 < sign; counter1++)
	{
		newstr[counter++] = s2[counter1];
	}
	newstr[counter++] = '\0';
	return (newstr);
}
