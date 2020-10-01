#include "holberton.h"
/**
* cap_string - cap_string
* @s: pointer
* Return: char
*/

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || i == 0)))
			s[i] = s[i] - ('a' - 'A');
	}
	return (s);
}
