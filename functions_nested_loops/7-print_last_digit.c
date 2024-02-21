#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - wil print the last digit of a given number
 *
 * @n: arg the number passed as a parameter
 *
 * Return: an int, the last digit of n
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	return (last_digit);
}
