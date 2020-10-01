#include "holberton.h"
#include <stdio.h>
/**
* _strcat - _strcat
* @dest: destination
* @src: source
* Return: char
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *s = dest;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; src[j] != '\0'; j++)
	{
		s[i] = src[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
