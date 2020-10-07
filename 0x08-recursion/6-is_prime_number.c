#include "holberton.h"
#include <stdio.h>

/**
 * checkprime - checkprime
 * @n: int
 * @val: int
 * Return: int
 */

int checkprime(int n, int val)
{
	if (n == val)
		return (1);
	else if (val % n == 0)
		return (0);
	return (checkprime(n + 1, val));
}

/**
 * is_prime_number - is_prime_number
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{

	if (n == 1 || n <= 0)
		return (0);
	return (checkprime(2, n));
}

