#include "holberton.h"
/**
* rev_string - rev_string
* @s: string
* Return: Always 0.
*/

void rev_string(char *s)
{
	int i;
	int j;
	int size;

	for (i = 0; s[i] != '\0'; i++)
	;
	size = i;

	char c[size + 1];

	for (i = 0; i <= size; i++)
		c[i] = s[i];
	for (i = 0; i < size; i++)
		s[i] = c[size - 1 - i];
}
