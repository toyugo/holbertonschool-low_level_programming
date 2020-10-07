#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - _puts_recursion
 * @s: string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[0] == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(s[i]);
	s = s + 1;
	_puts_recursion(s);
}
