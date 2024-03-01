#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag_sum1 = 0;
	int diag_sum2 = 0;

	for(i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			diag_sum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			diag_sum2 += *(a + i);
	}
	printf("%d, %d\n", diag_sum1, diag_sum2);
}
