#include "holberton.h"
/**
* _strlen - _strlen
* @s: string
* Return: Always 0.
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}

/**
* puts_half - puts_half
* @str: string
*/

void puts_half(char *str)
{
	int i;
	int size;

	if (size % 2 == 0)
		size = (_strlen(str) - 1) / 2;
	else
		size = (_strlen(str) / 2);
	for (i = size; i < size; i++)
		_putchar(str[i]);
	_putchar('\n');
}
