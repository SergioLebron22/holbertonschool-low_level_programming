#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - will add positive numbers
 *
 * @argc: counter
 * @argv: vector
 *
 * Return: sum of numbers
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i, j;
	char *num;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return  (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = argv[i];
		for (j = 0; num[j] != '\0'; j++)
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
