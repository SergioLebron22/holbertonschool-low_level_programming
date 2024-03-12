#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - will print a given name
 *
 * @name: given name to be printed
 * @f: pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
