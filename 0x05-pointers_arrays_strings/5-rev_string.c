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
* rev_string - rev_string
* @s: string
*/

void rev_string(char *s)
{
	int i;
	int size;
	char tmp[_strlen(s)];

	size = _strlen(s);

	for (i = 0; i <= size; i++)
		tmp[i] = s[i];
	for (i = 0; i < size; i++)
		s[i] = tmp[size - 1 - i];
}
