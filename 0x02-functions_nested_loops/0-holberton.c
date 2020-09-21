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
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
