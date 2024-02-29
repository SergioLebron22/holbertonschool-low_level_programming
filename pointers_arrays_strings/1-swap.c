#include <stdio.h>
#include "main.h"

/**
 * swap_int - will swap the values of two integers
 *
 * @a: arg number being swapped
 *
 * @b: arg number being swapped with
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

