#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - will create an array of char and initialize
 * with a specific char
 *
 * @size: size of array
 * @c: specific char
 *
 * Return: pointer to array or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	else
		return (NULL);

	return (array);
}
