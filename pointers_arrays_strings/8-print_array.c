#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_array - will print n elements of an array of integers
 *
 * @a: Array that will be printed
 *
 * @n: amount of elements that will be printed from the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
