#include "holberton.h"
#include <stdio.h>
/**
 * main - Print fizz buzz
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		printf(" ");
		if (i == 100)
			printf("\n");
	}
	return (0);
}
