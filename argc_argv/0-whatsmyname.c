#include <stdio.h>
#include "main.h"

/**
 * main - will print its name
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: command name
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}

