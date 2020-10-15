#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - _strlen
 * @s: char
 * Return: char *
 */
int _strlen(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	;
	return (k);
}

/**
 * string_nconcat - string_nconcat
 * @s1: char
 * @s2: char
 * @n : unsigned int
 * Return: char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i;
	unsigned int j;
	unsigned int len;

	len = _strlen(s2);

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	if (n >= len)
		n = len;
	j = 0;
	s3 = malloc(sizeof(s3) * (_strlen(s1) + _strlen(s2) + 1));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i] != '\0' && i <= n; i++)
	{
		s3[j] = s1[i];
		j++;
	}
	s3[j] = '\0';

	return (s3);
}
