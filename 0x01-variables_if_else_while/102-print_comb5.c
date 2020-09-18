#include <stdio.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	int u;
	int d;
	int u1;
	int d1;
	int cp1;
	int cp2;

	d1 = '0';
	cp1 = 0;
	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (u1 = '0'; u1 <= '9'; u1++)
		{
			cp2 = 0;
			for (d = '0'; d <= '9'; d++)
			{
				for (u = '0'; u <= '9'; u++)
				{
					if ((cp2 > cp1) || (cp2 != 99 && cp1 != 98))
					{
						putchar(d1);
						putchar(u1);
						putchar(' ');
						putchar(d);
						putchar(u);
						putchar(',');
						putchar(' ');
					}
					cp2++;
				}
			}
			cp1++;
		}
	}
	putchar('\n');
	return (0);
}
