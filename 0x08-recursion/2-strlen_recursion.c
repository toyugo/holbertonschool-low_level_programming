#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - _strlen_recursion
 * @s: string
 * Return: Len total
 */

int _strlen_recursion(char *s)
{
	int res = 0;

	if (s[0] == '\0')
		return (0);
	s = s + 1;
	res = _strlen_recursion(s) + 1;
	return (res);
}
