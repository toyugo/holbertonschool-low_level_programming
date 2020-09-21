#include "holberton.h"
/**
 * main - entry
 * print_alphabet - print alphabet
 * Return: 0
 */
int _islower(int c)
{
	int i;
	if (c >= 97 && c <= 122)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
