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
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
	
		if (str == NULL)
			str = "(nil)";

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", str);
			printf("%s", separator);
		}
		else
			printf("%s", str);
	}
	printf("\n");

	va_end(args);
}

