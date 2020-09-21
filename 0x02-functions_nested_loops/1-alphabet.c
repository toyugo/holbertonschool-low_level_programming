#include "holberton.h"
/**
 * main - entry
 * print_alphabet - print alphabet
 * Return: 0
 */

int print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}
