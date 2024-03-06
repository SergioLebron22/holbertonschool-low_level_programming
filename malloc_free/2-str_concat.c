#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - will concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to string in new memory
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr = NULL;
	unsigned int i;
	int num1;
	int num2;
	int counter;

	counter = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (num1 = 0; s1[num1] != '\0'; num1++)
		;
	for (num2 = 0; s2[num2] != '\0'; num2++)
		;
	newstr = (char *)malloc((num1 + num2 + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];
	for (; s2[counter] != '\0'; i++)
	{
		newstr[i] = s2[counter];
		counter++;
	}
	newstr[num1 + num2 + 1] = '\0';
	return (newstr);
}
