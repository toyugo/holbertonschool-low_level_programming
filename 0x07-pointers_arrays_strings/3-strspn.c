#include "holberton.h"
#include <stdio.h>

/**
* _strspn - _strspn
* @s: char
* @accept: char
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int b = 0;
	unsigned int res = 0;

	for (i = 0; accept[i]; i++)
	{
		b = 0;
		for (j = 0; s[j] && b == 0; j++)
		{
			if (s[j] == accept[i])
			{
				res += 1;
				b = 1;
			}
		}
	}
	if (accept[i] == '\0')
	{
		for (j = 0; s[j]; j++)
		;
		if (s[j] == accept[i])
			res += 1;
	}
	return (res);
}
