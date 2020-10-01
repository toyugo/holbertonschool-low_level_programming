#include "holberton.h"
/**
* rot13 - rot13
* @s: pointer
* Return: char
*/

char *rot13(char *s)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 1; j <= 13; j++)
			{
				s[i] = s[i] + 1;
				if (s[i] > 'z')
					s[i] = 'a';
			}
		}
	}
	return (s);
}
