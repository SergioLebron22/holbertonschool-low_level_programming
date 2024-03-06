#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - will free 2 dimensional grid fromprevious function
 *
 * @grid: rows of matrix
 * @height: columns of string
 *
 * Return: a pointer to grid, else null
 */

void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}

