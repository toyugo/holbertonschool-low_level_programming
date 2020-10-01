#include "holberton.h"
/**
*_strcmp - _strcmp
* @s1: string 1
* @s2: string 2
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int lens1;
	int lens2;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	;
	lens1 = i;
	for (i = 0; s2[i] != '\0'; i++)
	;
	lens2 = i;

	return (lens2 - lens1);
}
