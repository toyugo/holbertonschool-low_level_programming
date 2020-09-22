#include "holberton.h"
#include <stdio.h>
/**
 * main - main
 * Return: 0
 */

int main(void)
{
	unsigned long i;
	unsigned long j;
	unsigned long k;
	int cp;

	i = 1;
	j = 2;
	printf("1, 2, ");
	for (cp = 3; cp <= 98; cp++)
	{
		k = i + j;
		i = j;
		j = k;
		if (cp != 98)
			printf("%lu, ", k);
		else
			printf("%lu", k);
	}
	printf("\n");
	return (0);
}
