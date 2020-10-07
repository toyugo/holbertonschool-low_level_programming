#include "holberton.h"
#include <stdio.h>

/**
 * factorial - factorial
 * @n: number
 * Return: factorial
 */

int factorial(int n)
{
	int res = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	res = n * factorial(n - 1);
	return (res);
}
