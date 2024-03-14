#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printC - prints character
 *
 * @args: character
 *
 * Return: void
 */

void printC(va_list args)
{
	int c = va_arg(args, int);
	printf("%c", c);
}

/**
 * printI - prints integer number
 *
 * @args: integer
 *
 * Return: void
 */

void printI(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * printFl - prints float
 *
 * @args: float number
 *
 * Return: void
 */

void printFl(va_list args)
{
	double f = va_arg(args, double);
	printf("%f", f);
}

/**
 * printStr - prints string
 *
 * @args: string
 *
 * Return: void
 */

void printStr(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * pirnt_all - will print anything
 *
 * @format: format
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, j;
	int counter;
	va_list args;
	types allTypes[] = {
		{'c', printC},
		{'i', printI},
		{'f', printFl},
		{'s', printStr},
	};
	char *s = "";

	i = 0;
	counter = 0;

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == allTypes[j].t)
			{
				printf("%s", s);
				allTypes[j].f(args);
				s = ", ";
				counter++;
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
