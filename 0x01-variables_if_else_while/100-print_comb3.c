#include <stdio.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			if (j != i && j > i)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
