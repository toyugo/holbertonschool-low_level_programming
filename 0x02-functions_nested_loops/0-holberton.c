#include "holberton.h"
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	char c[] = "Holberton";
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
