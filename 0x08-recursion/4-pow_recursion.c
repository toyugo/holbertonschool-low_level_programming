#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - _pow_recursion
 * @x: int
 * @y: int
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	res = x * _pow_recursion(x, y - 1);

	return (res);
}
