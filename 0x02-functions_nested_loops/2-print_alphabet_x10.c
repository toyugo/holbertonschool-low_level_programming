#include "holberton.h"

/**
 * main - entry
 * print_alphabet - print alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
		putchar('\n');
	}
}
