#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - will print strings followed by a separator
 *
 * @separator: string separating other strings
 * @n: number of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1) && separator != NULL)
		{
			if (va_arg(args, char *) != NULL)
				printf("%s", va_arg(args, char *));
			else
				printf("(nil)");
			printf("%s", separator);
		}
		else
			printf("%s", va_arg(args, char *));
	}
	printf("\n");

	va_end(args);
}

