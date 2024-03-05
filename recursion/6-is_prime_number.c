#include <stdio.h>
#include "main.h"

/**
 * prime_helper - will check recursively the input
 *
 * @n: iterator
 * @base: base number being checked
 *
 * Return: 1 if n is a prime, else return 0 otherwise.
 */

int prime_helper(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (prime_helper(n + 1, base));
	return (1);
}

/**
 * is_prime_number - will check if the number is a prime number
 *
 * @n: number being checked
 *
 * Return: 1 if n is prime, otherwise return 0
 */

int is_prime_number(int n)
{
	return (prime_helper(2, n));
}
