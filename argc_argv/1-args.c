#include <stdio.h>
#include "main.h"

/**
 * main - will print the number of arguments passed
 *
 * @argc: counter
 * @argv: arg vector
 *
 * Return: amount of args
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
