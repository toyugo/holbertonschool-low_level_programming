#include "holberton.h"
/**
 * print_last_digit - last digit
 * @i: int value
 * Return: 0
 */

int print_last_digit(int i)
{
	if (i < 0)
		i = i * -1;
	i = i % 10;
	_putchar('0' + i);
	return (i % 10);
}
