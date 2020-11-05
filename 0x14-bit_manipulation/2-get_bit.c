#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - get_bit
 * @n: unsigned
 * @index: index
 * Return: unsigned
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int lb;

	lb = (n >> index);
	if (lb & 1)
		return (1);
	else
		return (0);
	return (-1);
}
