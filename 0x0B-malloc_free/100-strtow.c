#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 *
 *
 *
 */
int _ischar(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/**
 * strtow - strtow
 * @str: char
 * Return: char
 */

char **strtow(char *str)
{
	char **ar;
	int i;
	int k = 0;
	int j = 0;
	
	ar = malloc(1000 * sizeof(char));
	for (i = 0; i < 10; i++)
		ar[i] = malloc(1000 * sizeof(char));
	/*nb words*/
	for (i = 0; str[i] != '\0'; i++)
	{
		for (; str[i] == ' ' && str[i] != '\0'; i++)
		{
//			printf("[blank] vault : %c pour i vault = %i\n", str[i], i);
		}
		for (;_ischar(str[i]);i++)
			{
				printf("[add char] str vault : %c pour i vault = %i\n", str[i], i);
				ar[j][k] = str[i];
				k++;
			}
		ar[j][k] = '\0';
		k++;
		printf("pour j = %i string vault %s\n",j, ar[j]);
		j++;
	}
	return (ar);
}
