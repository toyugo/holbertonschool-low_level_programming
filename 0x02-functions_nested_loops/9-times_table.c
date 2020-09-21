#include "holberton.h"
#include <stdio.h>
/**
 * time_table- times_table
 *
 * Return: 0
 */

void times_table(void)
{
	int m;
	int t;
	int res;
	
	for (t = 0; t <= 9; t++)
	{
		for (m = 0; m <= 9; m++)
		{
			res = t * m;
			printf("%i", res);
/*			_putchar(res % 10 + '0');
			_putchar(res / 10 + '0');
			_putchar(',');
			_putchar(' ');
*/		}
		_putchar('\n');
		printf("\n");
	}
}
