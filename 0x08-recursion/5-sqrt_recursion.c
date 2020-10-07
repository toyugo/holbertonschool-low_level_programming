#include "holberton.h"
#include <stdio.h>

/**
 * recurs - calculate square
 * @n: integer to decrease to test each number
 * @checkvalue: check the square
 * Return: the square
 */
int recurs(int n, int checkvalue)
{
	if (n <= 0 || n * n > checkvalue)
		return (-1);
	if (n * n == checkvalue)
		return (n);
	return (recurs(n + 1, checkvalue));
}

/**
 * _sqrt_recursion - Squart recursively
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (recurs(1, n));
}
