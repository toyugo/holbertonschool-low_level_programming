#include "holberton.h"
#include <stdio.h>


int _sqrt(int n, long i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else
	{
		if (i * i == n)
			return (i);
		return (_sqrt(n, i + 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_sqrt(n, 0));
}
