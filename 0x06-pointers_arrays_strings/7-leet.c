#include "holberton.h"
/**
* leet - leet
* @s: pointer
* Return: char
*/

char *leet(char *s)
{
	int i;
	int j;
	char tb[6] = "aeotl";
	char tb2[6] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if ((s[i] == tb[j]) || (s[i] == tb[j] - ('A' - 'a')))
				s[i] = tb2[j];
		}
	}
	return (s);
}
