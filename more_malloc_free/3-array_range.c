#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - will create an array of integers
 *
 * @min: minimum value
 * @max: max value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

