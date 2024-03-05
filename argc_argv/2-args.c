#include <stdio.h>
#include "main.h"

/**
 * main - will print every argument
 *
 * @argc: counter
 * @argv: vector
 *
 * Return: arguments passed
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
