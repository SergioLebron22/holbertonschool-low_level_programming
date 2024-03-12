#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - will search for an integer
 *
 * @array: given array
 * @size: size of array
 * @cmp: pointer to function that compares values
 *
 * Return: 0 if false, -1 if no element matches or if size is <= 0
 * else any int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

