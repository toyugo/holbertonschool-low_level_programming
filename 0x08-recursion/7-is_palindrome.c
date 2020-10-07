#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - _strlen
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * pal - pal
 * @s: string order
 * @f: string reverse order
 * Return: pal
 */
int pal(char *s, char *f)
{
	if (s[0] == f[0])
		return (1);
	else
		return (0);
	pal(s + 1, f - 1);
}

/**
 * is_palindrome - is_palindrome
 * @s: int
 * Return: int
 */

int is_palindrome(char *s)
{
	return (pal(s, s + _strlen(s) - 1));
}

