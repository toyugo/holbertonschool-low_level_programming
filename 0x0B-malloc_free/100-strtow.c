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
	if ((c >= '!' && c <= '~'))
		return (1);
	else
		return (0);
}

int _strlen(char *s, int j)
{
	int i;

	for (i = j; s[i] != '\0' &&  s[i] != ' '; i++)
	;
	return (i - j);
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
	int j;
	int k;
	int len;
	
	/*To Alloc*/
	/*Detect word number*/
	ar = malloc(1000 * sizeof(char));
		/*Alloc main ar*/

	/*Loop to string*/
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		//printf("check str[i] = %c pour i = %i\n",str[i], i);
		/*Detect string start*/
		if(_ischar(str[i]) == 1)
		{
			/*Alloc len de words*/ /*comment utiliser seulemt _strlen(str)*/
			//printf("str[i] = %c, pour i vault %i test strlen %i\n",str[i],i , _strlen(str, i));
			/* Detect size string */
			len = _strlen(str, i);
			ar[k] = malloc((len + 1) * sizeof(char));
			/*Loop to add each char in tab + add '\0' end*/
			for (j = 0; _ischar(str[i]) == 1; j++)
			{
				ar[k][j] = str[i];
				i++;
			}
			k++;
		}
		else
			i++;
		/**/
	}
	return (ar);
}
