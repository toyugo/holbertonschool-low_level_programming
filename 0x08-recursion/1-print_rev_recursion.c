#include "holberton.h"
#include <stdio.h>

/**
 * _print_rev_recursion - _print_rev_recursion
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[0] == '\0')
	{
		return;
	}
	s = s + 1;
	_print_rev_recursion(s);
	_putchar(s[i]);
}
