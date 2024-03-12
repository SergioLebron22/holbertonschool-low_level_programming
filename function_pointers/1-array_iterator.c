#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - will execute a function given on each element
 *
 * @array: given array
 * @size: size of array
 * @action: function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
