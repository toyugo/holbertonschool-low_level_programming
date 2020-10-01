#include "holberton.h"
#include <stdio.h>
/**
* rot13 - rot13
* @s: pointer
* Return: char
*/

char *rot13(char *s)
{
	int i;
	int j;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcDefghijklmnopqrstuvwxyz";
	char c2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; c[j] ; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = c2[j];
				break;
			}
		}
	}
	return (s);
}
