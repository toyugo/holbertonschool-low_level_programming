#include "holberton.h"
#include<stdio.h>
/**
* _strncpy - _strncpy
* @dest: destination
* @src: source
* n: int
* Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for(i = 0; i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	for(j = 0; dest[j] != '\0'; j++)
	;

	dest[j + 1] = '\0';
	
	return (dest);
}
