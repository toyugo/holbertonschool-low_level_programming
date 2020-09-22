#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - Time table with n
 * @n: integer 1
 * Return: 0
 */

void print_times_table(int n)
{
	int i;
	int j;
	int res;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (!(n > 15 || n < 0))
			{
				res = i * j;
				if (j == 0)
					printf("%i", res);
				if (res < 10)
					printf("   %i", res);
				else if (res >= 10 && res < 100)
					printf("  %i", res);
				else if (res >= 100 && res < 1000)
					printf(" %i", res);
				if (j != n)
					printf(",");
				if (j == n)
					printf("\n");
			}
		}
	}
}
