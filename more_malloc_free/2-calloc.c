#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - will allocate memory for an array
 *
 * @nmemb: elements of the array
 * @size: of the array
 *
 * Return: NULL if nmemb or size is 0, or it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int total_size = nmemb * size;
	int i;
	void *allocated_memory = malloc(total_size);

	if (allocated_memory != NULL)
	{
		char *ptr = (char *)allocated_memory;

		for (i = 0; i < total_size; ++i)
		{
			ptr[i] = 0;
		}
	}
	return (allocated_memory);
}

