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
	void *arr = NULL;
	unsigned int i;
	unsigned int a;
	char *t;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = nmemb * size;
	arr = malloc(a);
	t = (char *)arr;
	if (t != NULL)
	{
		for (n = 0; n < a; n++)
			t[n] = 0;
		return (t);
	}
	return (NULL);
}

