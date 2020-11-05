#include <stdio.h>
#include "holberton.h"

unsigned long int power2max(unsigned long int n)
{
	unsigned long int i;
	unsigned long int cp;

	cp = 0;
	i = 1;
	while ((n >> i) != 0)
	{
		i++;
		cp++;
	}
	return (cp);
}

unsigned long int power2(unsigned long int n)
{
	unsigned long int res;
	if (n == 0)
		return (1);
	
	n = n - 1;
	res = 2 << n;

	return (res);
}
/**
 * print_binary - print_binary
 * @n: unsigned
 * Return: unsigned
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int t0;

	t0 = 0;
	t0 += power2max(n);
	if( n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	while (t0 > 0)
	{
		//printf("t0 = %lu\npowermax(n) = %lu\n", t0, power2max(n));
		if (power2max(n) == t0)
		{
			_putchar('1');
		//	printf("power2 vault %lu n = %lu\n", power2(t0), n);
			n -= power2(t0);
		}
		else
		{
			_putchar('0');
		}
		if (n == 0)
			_putchar('0');
		t0 = t0 - 1;
		//printf("After t0 = %lu\n", t0);
	}
}
