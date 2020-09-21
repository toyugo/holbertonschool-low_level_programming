#include "holberton.h"
/**
 * main - entry
 * print_alphabet - print alphabet
 * Return: 0
 */

int print_sign(int c)
{
	int i;
	if (c > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (c < 0)
	{
		_putchar('-');
		i = -1;
	}
	if (c == 0)
	{
		_putchar('0');
		i = 0;
	}
	return (i);
}
